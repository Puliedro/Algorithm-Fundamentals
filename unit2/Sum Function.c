#include <stdlib.h>
#include <stdio.h>

//function prototype
int sumNumber( int number1, int number2);

// value funciton

int a = 10;
int b = 20;

void modifyVariables(int a, int b){
    a = a * 2;
    b = b * 2;
    return;
}

void modifyVariablesAdress(int* variable1, int* variable2){
    *variable1 = *variable1 * 2;
    *variable2 = *variable2 * 2;
    return;


}


int main(int argc, char* argv []){
    // call the function
    int mySum = sumNumber (2, 4);
    printf("sume 10 + 20  = %d \n", sumNumber(10, 20));

    //modify variables
    printf("a: %d b: %d", a, b);
    modifyVariables(a,b);
    printf("a; %d b: %d", a, b);
    printf(";;;;;;;;a: %d b: %d", a, b);
    modifyVariablesAdress(&a, &b);
    printf("a: %d b: %d", a, b);



    return 0;
}

// functions declaration
int sumNumber(int number1, int number2 ){

    // local variables
    int suma = 0;
    suma = number1 + number2;
    return suma;

}
