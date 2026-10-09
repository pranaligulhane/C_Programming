#include <stdio.h>
int main() {
    int count = printf("Pranali!\b\n");
    printf("count = %d\n",count);

    int num = 19;
    count = printf("num = %d\n",num);
    printf("count = %d\n",count);

    int num1,num2,num3;
    printf("Enter the value of num1,num2,num3\n");
    count = scanf("%d%d%d",&num1,&num2,&num3);
    printf("count = %d\n",count);

    return 0;
}