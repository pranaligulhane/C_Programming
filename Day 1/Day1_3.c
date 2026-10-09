#include <stdio.h>

int main() {
    int num = 25;
    char ch = 'A';
    float f = 1.5;
    double d = 3.14;

    printf("size of num = %u\n",sizeof(int)); //4
    printf("size of ch = %u\n",sizeof(char)); //1

    printf("size of f = %u\n",sizeof(float)); //4
    printf("size of d = %u\n",sizeof(double)); //8

    printf("size of A = %u\n",sizeof('A')); //4
    printf("size of 1.5 = %u\n",sizeof(1.5)); //8

    printf("size of num + ch = %u\n", sizeof(num + ch)); //4
    //
}