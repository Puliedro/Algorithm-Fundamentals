#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

/*For this code, we'll use the following properties:
- Every number can be decomposed in prime factors. For example, 28 is equal to 28=2*2*7
- Basically, you have to check if every prime number minor to the number divides it. 
This can be reduced to all the prime numbers less or equal to the square root of the number, 
since divisor*quotient = number, and at most both can be the square root of the number.
-Another useful thing, is that all prime numbers have remainder 1 or 5 when divided by 6. This will reduce the time loops appear, since we cannot determine the prime numbers by any other means.
*/
//Function to check if a number entered is prime
bool isPrime(int a){
int number1 = a;
int factorToCheck = 5;

bool answer = true;
double sRoot = sqrt(a); 
double floorSR = floor(sRoot);

if (number1 % 2 == 0){
    answer = false;
} else if (number1 % 3 == 0){
    answer = false;
    } else {
        while (factorToCheck < floorSR){
            if (number1 % factorToCheck == 0){
                answer = false;
                break;
            } else{
                factorToCheck = factorToCheck + 2;
                if(number1 % factorToCheck == 0){
                    answer = false;
                    break;
                } else{
                    factorToCheck = factorToCheck + 4;
                }
            }
        }

        }
    return answer;
}

int main(){
    int numero;
    printf("Enter a number to see if it is prime or composite!\n");
    scanf("%d", &numero);
    bool respuesta = isPrime(numero);
    switch (numero)
    {
    case 0:
        printf("This is neither a composite nor a prime number, it is the nulity\n");
        break;
    case 1:
        printf("This is neither a composite nor a prime number, it is the unit\n");
        break;    
    case 2:
        printf("This is the only even prime number!\n");
        break;        
    case 3:
        printf("This is the first odd prime number!\n");
        break;    
            
    default:
     
     if (respuesta == true){
         printf("\nThis is a prime number!\n");
     }else {
            printf("\nThis is a composite number!\n");
      }
        break;
    }


return 0;
}