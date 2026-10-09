#include <stdio.h>

int main() {
    int arr[5]; //declaration
    arr[0] = 10;  
    arr[1] = 11;  
    arr[2] = 12; 

    int arr2[5] = {11,22,33,44,55}; // initalization
    printf("arr2[0] = %d\n arr2[1] = %d\n",arr2[0],arr2[1]);

    int arr3[7] = {11,22,33}; //partial initialization
    // int arr4[];  error

    int arr4[] = {11,22,33,44,55};

    printf("Array elements: \n");
    for(int i = 0; i<5; i++) {
        printf("%-4d",arr2[i]);
    }
    return 0;
    
}