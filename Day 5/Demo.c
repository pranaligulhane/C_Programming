#include <stdio.h>

int main() {
    int num1,num2;

    printf("Enter the Two Numbers: ");
    scanf("%d%d",&num1,&num2);

    int max = num1>num2 ? printf("num1 is greater") : printf("num2 is greater");
    printf("%d\n",max);
}