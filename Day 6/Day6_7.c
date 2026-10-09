#include <stdio.h>
int main() {
    int num1;
    printf("Enter the number : \n");
    scanf("%d",&num1);

    for(int i = 1;i<=10;i++){
        printf("%d * %d = %d\n",num1,i,num1*i);
    }
}