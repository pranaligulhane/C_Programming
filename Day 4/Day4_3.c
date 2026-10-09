#include <stdio.h>

int main() {

    int num1 = 0;
    int num2 = -40;

    int res = num1 && num2;
    printf("Res : %d\n",res);

     res = num1 || num2;
    printf("Res : %d\n",res);

    res = !num1;
    printf("Res : %d\n",res);

    res = !num2;
    printf("Res : %d\n",res);

}