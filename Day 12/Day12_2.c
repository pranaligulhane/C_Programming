#include<stdio.h>
int main() {
    char str[] = "sunbeam";
    char *ptr = "sunbeam";

    printf("str = %s\n",str);
    str[3] = 'B';
    printf("str = %s\n",str);
    printf("ptr = %s\n",ptr);
    //ptr[3] = 'B';  
    
}