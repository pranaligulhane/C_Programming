#include <stdio.h>
int main() {
    int num1 = 25;
    int num2 = 50;
    
    int res = num1++;
    printf("res : %d num1 = %d num2 = %d\n",res,num1,num2);

    res = ++num1;
    printf("res : %d num1 = %d num2 = %d\n",res,num1,num2);

    res = num2++;
    printf("res : %d num1 = %d num2 = %d\n",res,num1,num2);

    res = ++num2;
    printf("res : %d num1 = %d num2 = %d\n",res,num1,num2);

    res = num1--;
    printf("res : %d num1 = %d num2 = %d\n",res,num1,num2);

    res = --num1;
    printf("res : %d num1 = %d num2 = %d\n",res,num1,num2);

    res = num2--;
    printf("res : %d num1 = %d num2 = %d\n",res,num1,num2);

    res = --num2;
    printf("res : %d num1 = %d num2 = %d\n",res,num1,num2);

}