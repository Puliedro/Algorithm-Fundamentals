#include <stdio.h>
#include <stdlib.h>


//variables
int x = 0;
int* p = &x;
int num ;


// modify variable's values with pointers

void modifyVariable(int* pointer){
    for (int i = 1; i <= num; i++){
        if ( num % i ==0){
            *p = x + 1;
        }
    }
    return;
}

int main(){
    printf("Type your number: \n");
    scanf("%d", &num);
    //call the modifyVariable funciton
    modifyVariable(p);
    if (x == 2){
        printf("The number %d is prime\n", num);
    }
    else {
        printf("The number %d is not prime\n", num);
    }

}

