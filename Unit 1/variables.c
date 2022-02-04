#include <stdio.h>
#include <sum.h>
int age = 19;
float height = 1.78;
char* name = "Julio Dzul"
char sexo = 'M';

int main(){

    int after10years = suma(age,10);
    printf("My age after 10 years is: %d", after10years);

    return 0;
}
