#include <stdio.h>
int main() {
    int num1 = 25;
    int *ptr = &num1;

    printf("num1 is : %d\n",num1);
    printf("&num1 is : %u\n",&num1);
    printf("ptr is : %u\n",ptr);
    printf("&ptr is : %u\n",&ptr);

    return 0;
    
}