#include <stdio.h>
int main() {
    char str[30];
    printf("enter the string\n");
    //scanf("%[^A-Z]",str); // it will stop scanning whwn encounterd with A-Z
    //scanf("%[A-Z]",str); // it will scan A-Z
    //scanf("%[^0-9]",str);
    //scanf("%[^\n]",str);
    printf("%s",str);

}