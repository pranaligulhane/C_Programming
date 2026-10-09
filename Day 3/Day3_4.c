#include <stdio.h>

int main() {
    int num = 25;
    printf("Number : %5d\n",num);//---25 start form right 
    printf("Number : %-5d",num);//25--- start from left
    printf("Hiii\n");

    float fvar = 3.5f;
    printf("Number : %6.3f\n",fvar);
    printf("Number : %-6.3f",fvar);
    printf("hello!");
    
    return 0;
}