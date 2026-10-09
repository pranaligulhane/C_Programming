#include <stdio.h>
int main() {
    int num1 = 10;
    int num2 = 20;

    int *ptr = &num1;
    printf("num1 = %d num2 = %d\n",num1,num2); //10 11
    printf("num1 = %d ++*ptr = %d\n",num1,++*ptr); //11 11

     return 0;
}