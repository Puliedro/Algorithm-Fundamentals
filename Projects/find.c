#include <stdio.h>

int bigger(int arr[], int len){
    int high;
    for (int i =0; i < len -1; i++){
        if (arr[i]> arr [i+1]){
            high = arr[i];
        }
        else{
            high = arr[i+1];
        }
    }
    return high;
}

int main(){
    int arr[] = {0,0,0};
    int len = sizeof(arr)/sizeof(int);
    printf("Enter three numbers to check which one is the greatest one\n");
    scanf("%i%i%i", &arr[0],&arr[1],&arr[2]);
    int max = bigger(arr,len);
    printf("The greatest number of the three you entered is: %d \n", max);
    return 0;
}
