#include <stdio.h>

int main(){
int i = 0;
int arraysito[] = {1, 2, 3, 4, 5};

size_t n = sizeof(arraysito) / sizeof(arraysito[0]);
int menosuno = n-1;
printf("[");
while (i < n){
    printf("%d",arraysito[i]);
    if (i< menosuno){
        printf(",");
    }
    i++;
}
printf("]");
return 0;
}