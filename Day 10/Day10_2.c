#include<stdio.h>
int main() {
    int num1 = 10;
    int *ptr = &num1;

    printf("num1 = %d\n",num1); //10
    printf("&num1 = %u\n",&num1); //100

    printf("ptr = %u\n",ptr); //100
    printf("*ptr = %d\n",*ptr); //10

    ptr++;
    printf("num1 = %d\n",num1); //10
    printf("ptr = %u\n",ptr);//104 beacuse of scale factor int 4 byte increment by 4

    char ch = 'A';
    char *ptr1 = &ch;

    printf("ch = %c\n",ch); //A
    printf("&ch = %u\n",&ch); //100

    printf("ptr1 = %u\n",ptr1); //100
    
    ptr1++;
    printf("ch = %c\n",ch); //A
    printf("ptr1 = %u\n",ptr1); //101 beacuse of scale factor char 1 byte increment by address 1

}