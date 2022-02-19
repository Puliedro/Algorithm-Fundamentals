#include <stdio.h>
int counter = 0;

int main(){
    printf ("While loop\n");
    while (counter <= 100 ){
        printf("Count: %d\n", counter);
        counter = counter + 1;

    }

    printf("For loop\n");
    for (int i = 1; i<=100; i=i+1){
        printf("i: %d\n", i);
    }

    for (int i=1; ;i=i+1){
        printf("i: %d\n,", i);
        if (i> 20000){
            break;
        }
    }
}