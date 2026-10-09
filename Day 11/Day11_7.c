#include <stdio.h>
#include<string.h>
int main() {
    char str[] = "sunbeam";
    printf("size of str = %u\n",sizeof(str));
    printf("strlen = %u\n",strlen(str));

    char str2[] = "sunbeam\0Info";
    printf("size of str2 = %u\n",sizeof(str2));
    printf("strlen = %u\n",strlen(str2));

    return 0;

}