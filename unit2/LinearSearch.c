#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int lenght, int num ){
    for (int i = 0; i < lenght; i ++){
        if (num == arr[i]){
            return i;
        }       
    }
return -1;
}

int main(){
    int arr[] = { 50, 5, 1, 37, 4};
    int lenght = sizeof(arr)/sizeof(int);
    int num = 0;
    printf("Type your number: \n");
    scanf("%i", &num);
    int index= linearSearch(arr, lenght, num);
    if (index ==  -1){
        printf("nota\n");

    }
    else {
        printf("Your number is at position: %i \n", index +1);
    }
}