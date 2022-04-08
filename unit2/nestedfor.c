#include <stdio.h>
#include <stdlib.h>

char * myName = "Héctor González"; 


int main (int argc, char ** argv){
    printf("Welcome to program %s\n", argv[0]);
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;
    printf("The sum is equal to %d\n", sum);

    return 0;
}
