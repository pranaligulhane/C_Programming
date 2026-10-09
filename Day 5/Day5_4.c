#include <stdio.h>

int main() {
    int num1,num2;

    printf("Enter the Two Numbers: ");
    scanf("%d%d",&num1,&num2);

    int max = num1>num2 ? num1 : num2;
    printf("%d",max);
}