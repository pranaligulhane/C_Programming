#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "sunbeam";
    printf("str[2] = %c\n",str[2]);
    printf("*(str+2) = %c\n",*(str+2));

    printf("str[6] = %c\n",str[6]);
    printf("*(str+6) = %c\n",*(str+6));

    printf("*(str+6)+2 = %c\n",*(str+6)+2);

    //printf("*(str+8)+2 = %c\n",*(str+8)+2);

}