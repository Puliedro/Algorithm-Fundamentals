#include <stdio.h>


struct student {
    int math;
    int english;
    float promedio;
    char *name;
    char *group;
};

struct transporte {
    int llantas;
    char* color;
    char* name;
};




int main(){
    struct student sonia = {10, 10, 10, "Sonia", "A"};
    struct student diego = {5, 7, 6.5, "Diego", "A"};    
    struct transporte coche = {4, "negro", "Civic"};
    struct transporte autobus = {8, "morado", "ruta 17"};

    //show info
    printf("%s  %f\n", sonia.name, sonia.promedio);
    

    return 0;

}