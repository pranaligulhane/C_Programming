#include <stdio.h>
int main() {
    int num1,num2,num3;
    char ch1;

    printf("Enter the value of num1, num2, num3");
    scanf("%d%d%d", &num1,&num2,&num3);

     printf("Enter the value of ch\n");
    scanf("%*c%c",&ch1);

    printf("num1 = %d num2 = %d num3 = %d\n",num1,num2,num3);
    printf("ch1 = %c\n",ch1);

    return 0;
}