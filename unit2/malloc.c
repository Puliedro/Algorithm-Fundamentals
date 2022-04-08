#include <stdio.h>
#include <stdlib.h>

// char* myArray = malloc(sizeof(int)*200);

int myArr[3] = {5, 2, 3};
int lenght = sizeof(myArr)/ sizeof(int);

void printArray(int* name, int lenght){
    int index = 0;
    while (index < lenght){
        myArr[index] = myArr[index] * 2;
        index ++;

    }
}

int printArr(){
    for (int i=0; i < lenght; i ++){
        printf(" %d,", myArr[i]);
    }
    
}



int main(int argc, char* argv){
    myArr[0]= atoi(argv[1]);
    myArr[1]= atoi(argv[2]);
    myArr[2]= atoi(argv[3]);
    printArray(myArr, lenght);
    printf("{");
    printArr();
    printf("}\n");


}