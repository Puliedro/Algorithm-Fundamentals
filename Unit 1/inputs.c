#include <stdio.h>
int num1;
int num2;
int main(){

    printf("Enter the first number! \n\tnum1:");
    scanf("%d", &num1);
    printf("Enter the second number! \n\tnum2:");
    scanf("%d",&num2);

    int sum = num1 +num2;
    printf("Sum is %d\n", sum);

    return 0;
}