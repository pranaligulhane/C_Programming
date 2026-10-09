#include <stdio.h>
void swap();

int main() {
    int n1 = 10,n2 = 30;
    printf("Before swaping the n1: %d and n2 : %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swaping the n1: %d and n2 : %d\n",n1,n2);
}

void swap(int *ptr1,int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}