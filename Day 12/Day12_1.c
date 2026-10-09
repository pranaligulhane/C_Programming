#include <stdio.h>
int main() {
    int arr[5] = {11,22,33,44,55};
    char str[] = "sunbeam";

    printf("arr[2] = %d\n",arr[2]); //33
    printf("2[arr] = %d\n",2[arr]); //33

    printf("str[3] = %c\n",str[3]); //b
    printf("3[str] = %c\n",str[3]); //b

    return 0;
}