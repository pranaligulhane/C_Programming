#include <stdio.h>
int main() {
    char ch1 = 'A', ch2 = 'Z';
    char ch3 = 'a' , ch4 = 'z';
    char ch5 = '\n';
    char ch6 = '\r';

    printf("ASCII value of A to Z = %d to %d\n", ch1,ch2);
    printf("ASCII value of a to z = %d to %d\n",ch3, ch4);
    printf("ASCII value of '0' to '9' = %d to %d\n", '0','9');
    printf("ASCII value of \\n is %d\n",ch5);
    printf("ASCII value od \\r is %d\n",ch6);

    printf("%d\n", '\n' - '\r');
    printf("%d\n", '\n');
    printf("%d\n", '\r'); 

    return 0;
}