#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter the numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);

    int max = num1>num2 ? num1>num3?num1:num3 : num2>num3?num2:num3;
    printf("%d",max);

}


   