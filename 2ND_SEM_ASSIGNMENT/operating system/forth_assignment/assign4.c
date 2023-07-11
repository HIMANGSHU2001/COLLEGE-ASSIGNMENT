#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int choice = 0;
    char *args[] = {"", NULL};
    int status;

    while(1){
        printf("1. ls\n");
        printf("2. pwd\n");
        printf("3. uname\n");
        printf("4. exit\n");
        printf("Enter coice: \n");
        scanf("%d", &choice);

        
        pid_t pid = fork();

        if (pid != 0 && choice == 4) {
            waitpid(pid, &status, 0);
            printf("Exiting program...\n");
            break;
        }
        if (pid == -1) {
            perror("fork");
            return 1;
        } else if (pid == 0) {
            
            switch(choice){
                case 1:
                    args[0] = "/bin/ls";
                    break;
                case 2:
                    args[0] = "/bin/pwd";
                    break;
                case 3:
                    args[0] = "/bin/uname";
                    break;
                case 4:
                    exit(1);
                    break;
                default:
                    exit(1);
                    break;
            }

            // child process
            printf("\n");
            execv(args[0], args);
            exit(1);
        } else {
            // parent process
            waitpid(pid, &status, 0);
            printf("\n");
        }

    }

    return 0;
}

