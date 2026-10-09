#include <stdio.h>
int main() {
     int arr[5];
    printf("enter the array elements:\n");
    for(int i = 0; i<5; i++){
        //scanf("%d",&arr[i]); // array notation
        scanf("%d",arr+i); // pointer notation
    }

    printf("array elements:\n");
    for(int i = 0; i<5; i++){
        //printf("%4d",arr[i]); // array notation
         printf("%4d",*(arr+i)); // pointer notation
    }
    return 0;

}