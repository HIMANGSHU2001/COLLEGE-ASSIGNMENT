#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define NUM_CHILDREN 10
#define RANGE_SIZE 100000

int is_prime(int number) {
    if (number < 2)
        return 0;
    
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }
    
    return 1;
}

void print_prime_numbers(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_prime(i))
            printf("At Process %d ---%d\n ", i+1, i);
    }
    printf("\n");
}

int main() {
    pid_t pid;
    int range_start = 1;
    int range_end = RANGE_SIZE;
    
    for (int i = 0; i < NUM_CHILDREN; i++) {
        pid = fork();
        
        if (pid == -1) {
            fprintf(stderr, "Fork failed.\n");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {  // Child process
            printf("Child process %d: \n", i + 1);
            print_prime_numbers(range_start, range_end);
            exit(EXIT_SUCCESS);
        }
        
        range_start = range_end + 1;
        range_end += RANGE_SIZE;
    }
    
    // Parent process
    for (int i = 0; i < NUM_CHILDREN; i++) {
        wait(NULL);
    }
    
    return 0;
}

