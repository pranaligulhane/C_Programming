#include <stdio.h>
int main() {
    int arr[3][3] = {11,22,33,44,55,66,77,88,99};
    printf("arr[1][0] = %d\n",arr[1][0]); 
    printf("*(*(arr+1)+0 = %d\n",*(*(arr+1)+0)); 
    printf("**(arr+1) = %d\n",**(arr+1));

     printf("arr[2][0] = %d\n",arr[2][0]); //array notation
    printf("*(*(arr+2)+0) = %d\n",*(*(arr+2)+0));// pointer notation
    printf("**(arr+2) = %d\n",**(arr+2));

    printf("arr[0][0] = %d\n",arr[0][0]); //array notation
    printf("*(*(arr+0)+0) = %d\n",*(*(arr+0)+0));// pointer notation
    printf("**(arr) = %d\n",**(arr));


}