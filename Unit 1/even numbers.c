#include <stdio.h>

int main(){
    int number;
    printf("Welcome! Enter an integer number to check if it is even or odd\n");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("You have entered the number %d. This is an even number!",number);
    }else{
        printf("You have entered the number %d. This is an odd number!",number);
    }
}