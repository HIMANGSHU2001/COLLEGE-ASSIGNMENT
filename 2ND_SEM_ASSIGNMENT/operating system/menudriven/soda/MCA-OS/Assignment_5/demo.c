#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <unistd.h>

#define PERMS 0666

void sem_wait(int *sem) {
    while ((*sem) <= 0)
        ;
    (*sem)--;
}

void sem_signal(int *sem) { (*sem)++; }

int main() {
    int *S, *shm_turn, *shm_counter;
    int S_id, shm_turn_id, shm_counter_id;
    int status;

    pid_t p_arr[3], pid;

    int i;

    S_id = shmget(IPC_PRIVATE, sizeof(int) * 4, IPC_CREAT | PERMS);
    shm_turn_id = shmget(IPC_PRIVATE, sizeof(int), IPC_CREAT | PERMS);
    shm_counter_id = shmget(IPC_PRIVATE, sizeof(int), IPC_CREAT | PERMS);

    S = shmat(S_id, 0, 0);
    shm_turn = shmat(shm_turn_id, 0, 0);
    shm_counter = shmat(shm_counter_id, 0, 0);

    S[1] = 1;
    S[2] = 0;
    S[3] = 0;

    *shm_turn = 0;
    *shm_counter = 10;

    for (i = 1; i <= 3; i++) {
        p_arr[i] = pid = fork();

        if (pid == 0) {
            
            if (i == 1) {
                while (1) {
                    sem_wait(&S[1]);

                    if (*shm_counter <= 0) {
                        sem_signal(&S[2]);
                        sem_signal(&S[3]);

                        shmdt(S);
                        shmdt(shm_turn);
                        shmdt(shm_counter);

                        exit(0);
                    }

                    printf("A ");
                    fflush(stdout);

                    sem_signal(&S[2]);
                }

            } else if (i == 2) {
                
                while (1) {
                    sem_wait(&S[2]);

                    if (*shm_counter <= 0) {
                        shmdt(S);
                        shmdt(shm_turn);
                        shmdt(shm_counter);

                        exit(0);
                    }

                    printf("B ");
                    fflush(stdout);

                    if (*shm_turn == 0)
                        sem_signal(&S[3]);
                    else {
                        (*shm_counter)--;
                        *shm_turn = 0;
                        sem_signal(&S[1]);
                    }
                }

            } else if (i == 3) {
                
                while (1) {
                    sem_wait(&S[3]);

                    if (*shm_counter <= 0) {
                        shmdt(S);
                        shmdt(shm_turn);
                        shmdt(shm_counter);

                        exit(0);
                    }

                    printf("C ");
                    fflush(stdout);

                    if (*shm_turn == 0) {
                        *shm_turn = 1;
                        sem_signal(&S[3]);
                    } else
                        sem_signal(&S[1]);
                }
            }
        }
    }

    for (i = 0; i < 3; i++)
        waitpid(p_arr[i], &status, 0);

    shmdt(S);
    shmdt(shm_turn);
    shmdt(shm_counter);

    shmctl(S_id, 0, 0);
    shmctl(shm_turn_id, 0, 0);
    shmctl(shm_counter_id, 0, 0);

    return 0;
}

