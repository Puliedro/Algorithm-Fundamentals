#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*int main(){
    int number;
    printf("Welcome! Enter an integer number to check if it is even or odd\n");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("You have entered the number %d. This is an even number!",number);
    }else{
        printf("You have entered the number %d. This is an odd number!",number);
    }
}
*/
    int main(int argc, char** argv){
        int numberToTest = atoi(argv[1]);
        bool isDividedByTwO = (numberToTest %2 == 0);

        if (isDividedByTwO == true) {
            printf("You have entered the number %d. This is an even number!",numberToTest);

        } else{
            printf("You have entered the number %d. This is an odd number!",numberToTest);
        }
    }