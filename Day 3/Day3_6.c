#include <stdio.h>
int main() {
    int num1;
    num1 = 50,30,40;
    printf("Number : %d\n",num1);//if we not use braket then value choose left most value

    int num2 = (50,60,70);
    printf("Number : %d\n",num2);//if we  use braket then value choose right most value

    return 0;
}