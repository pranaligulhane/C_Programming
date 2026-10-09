#include <stdio.h>

int main() {
    int num1 = 20;
    int num2 = 50;

    printf("Before : num1 = %d num2 = %d\n",num1,num2);

    num1 += num2;
    printf("num1 = %d num2 = %d\n",num1,num2);

    num1 -= num2;
    printf("num1 = %d num2 = %d\n",num1,num2);

    num1 *= num2;
    printf("num1 = %d num2 = %d\n",num1,num2);

    num1 /= num2;
    printf("num1 = %d num2 = %d\n",num1,num2);

    num1 %= num2;
    printf("num1 = %d num2 = %d\n",num1,num2);
}