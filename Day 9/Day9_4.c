// Types of Pointers: Wild Pinter,NULL Pointer, Void Pointer
#include<stdio.h>
int main(){
    int num1 = 25;
    char ch = 'A';
    int *ptr1; // wild pointer
    int *ptr2 = NULL; // NULL pointer '\0' = 0
    void *ptr3 = NULL; // void pointer

    ptr3 = &num1;
    printf("num1 = %d\n",num1); // 25
    printf("*ptr3 = %d\n",*(int*)ptr3); // typecasting
    ptr3 = &ch;
    printf("ch = %c\n",ch);
    printf("*ptr3 = %c\n",*(char*)ptr3); //typecating

    return 0;

}