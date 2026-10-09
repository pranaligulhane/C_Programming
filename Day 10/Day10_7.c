#include <stdio.h>
int main() {
    int arr[5] = {11,22,33,44,55};
    printf("arr[0] = %d\n",arr[0]); //Array Notation
    printf("*(arr+0) = %d\n",*(arr+0)); //pointer Notation

    printf("arr[2] = %d\n",arr[2]);
    printf("*(arr+2) = %d\n",*(arr+2));

    printf("Array Element\n"); //Array loop
    for(int i = 0; i<5 ; i++){
        printf("%4d",arr[i]); 
    }

     printf("\nArray Element\n"); //Pointer loop
    for(int i = 0; i<5 ; i++){
        printf("%4d",*(arr+i)); //value at 
    }
}