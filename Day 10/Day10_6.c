#include <stdio.h>
int main() {
    int arr[5] = {11,22,33,44,55};
    int arr2[7] = {11,22,33};

    printf("size of arr =%u\n",sizeof(arr));
    printf("sizeof arr2 = %u\n",sizeof(arr2));
     // 28
    printf("sizeof arr[0] = %u\n",sizeof(arr[0]));
    // 4
    int length = sizeof(arr)/sizeof(arr[0]);
    
    printf("length = %d\n",length);
}