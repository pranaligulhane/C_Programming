#include <stdio.h>
int main() {
    int num1 = 10;
    int *ptr = &num1;

    printf("num1 = %d\n",num1); //10
    printf("&num1 = %u\n",&num1); //100

    printf("ptr = %u\n",ptr); //100
    ++*ptr;//value at *100 inside the box is 10 then increment by 1 means 11
     //increment by value //increment value at pointer
    printf("num1 = %d\n",num1); //11
    printf("ptr = %u\n",ptr); //100


    int num2 = 20;
    int *ptr1 = &num2;

    printf("num2 = %d\n",num2); //20
    printf("&num2 = %u\n",&num2); //200

    printf("ptr1 = %u\n",ptr1); //200
    *ptr1++;// increment pointer
     //increment by value 
    printf("num2 = %d\n",num2); //20
    printf("ptr = %u\n",ptr); //204


}