#include <stdio.h>

int main(){
    int a,b;
    printf("Type the lengths of the rectangle!");
    scanf("%i%i",&a,&b);
    if (a <= 0 || b <= 0 ){
        printf("These values are not valid\n");
    }
    else{
    int area = a*b;
    if (a == b){
        printf("The figure is a square!\n");
    }
    else {
        printf("The area is: %d\n", area);
    }
    }

    return 0;
}
