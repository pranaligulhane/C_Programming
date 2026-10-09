#include <stdio.h>
int main () {
    int num1;
    printf("Enter the Number :\n");
    scanf("%d",&num1);

    int i = 1;
    while(i<=10) {
        printf("%d * %d = %d\n",num1,i,num1 * i);
        i++;
    }
    return 0;
}