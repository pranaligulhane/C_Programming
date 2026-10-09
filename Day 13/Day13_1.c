#include <stdio.h>
int main() {
    int arr[5] = {11,22,33,44,55};//1D array
    int arr1[3][2] = {11,22,33,44,55,66}; //2D array
    int arr2[3][3] = {11,22,33,44,55}; //partial initialization
    
    //inr arr[][]; //error
    int arr4[][3] = {1,2,3,4,5};
    printf("arr1[1][1] = %d\n",arr1[1][1]);

    printf("Array Element: \n");
    for(int i = 0;i<3;i++){
        for(int j = 0 ; j<2 ; j++){
            printf("%4d",arr1[i][j]);
        }

        printf("\n");
    }
     return 0; 
}


