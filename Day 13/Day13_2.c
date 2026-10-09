#include <stdio.h>
void accept_value(int arr1[3][3]);
void print_data(int arr1[3][3]);
int main() {
    int arr1[3][3];
    accept_value(arr1);
    print_data(arr1);
    printf("sizeof arr in main = %u\n",sizeof(arr));

}

void accept_value(int arr1[3][3]){
    printf("enter the array elements:\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("sizeof arr in accept = %u\n",sizeof(arr));

}

void print_data(int arr1[3][3]){
    printf("array elements:\n");
    for(int i = 0;i<3;i++){
        for(int j = 0; j<3;j++){
            printf("%4d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("sizeof arr in print = %u\n",sizeof(arr));

}