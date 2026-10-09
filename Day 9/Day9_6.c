#include <stdio.h>
void swap();

int main() {
    int n1 = 10,n2 = 30;
    printf("Before swaping the n1: %d and n2 : %d\n",n1,n2);
    swap(n1,n2);
    printf("After swaping the n1: %d and n2 : %d\n",n1,n2);
}

void swap(int num1,int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}