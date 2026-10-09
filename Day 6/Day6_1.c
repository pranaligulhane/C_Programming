#include <stdio.h>
int main(){
    int num1 = 10;
    int num2 = 30;
    char ch;

    printf(" + \n - \n * \n  / \n");

    printf("enter the choice\n");
    scanf(" %c",&ch);

    switch (ch) {
        case '+' : 
            printf("Addition is : %d\n",num1 + num2);
            break;
        case '-' : 
            printf("subtraction is : %d\n",num1 - num2);
            break;
        case '*' : 
            printf("multiplication is : %d\n",num1 * num2);
            break;
        case '/' : 
            printf("division is : %d\n",num1 / num2);
            break;
        default :
            printf("Invalid choice");
    }
    return 0;
}