
// Assigning address of one type of variable to different type of pointer_
#include <stdio.h>
int main() {
    int num1 = 500; //int have 4 byte
    char *ptr = &num1; //char have only 1 byte so data will be loss

    printf("num1 = %d\n",num1); // 500
    printf("*ptr = %d\n",*ptr); //-12 


}