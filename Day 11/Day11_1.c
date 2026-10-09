#include <stdio.h>
void accept_data(int arr[4]);
void print_data(int arr[4]);
int main() {
    int arr[4];
    accept_data(arr);
    print_data(arr);
}

void accept_data(int arr[4]) {
    printf("Enter the Elements\n");
    for(int i = 0; i<4; i++){
        scanf("%d",&arr[i]);
    } 
}
void print_data(int arr[4]) {
    printf("Array Elements\n");
    for(int i = 0; i<4; i++){
        printf("%4d",arr[i]);
    } 
    printf("\n");
    printf("size of arr = %u\n",sizeof(arr)); //8
}