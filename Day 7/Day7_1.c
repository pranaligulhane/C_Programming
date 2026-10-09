#include <stdio.h>
int main(){
    int num1 = 10;
    int num2 = 30;
    int ch;

    printf("1 Addition\n 2 subtraction\n 3 multiplication\n 4 division\n");

    printf("enter the choice\n");
    scanf("%d",&ch);

    switch (ch) {
        case 1 : 
            printf("Addition is : %d\n",num1 + num2);
            break;
        case 2 : 
            printf("subtraction is : %d\n",num1 - num2);
            break;
        case 3 : 
            printf("multiplication is : %d\n",num1 * num2);
            break;
        case 4 : 
            printf("division is : %d\n",num1 / num2);
            break;
        default :
            printf("Invalid choice");
    }
    return 0;
}