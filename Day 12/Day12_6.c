#include<stdio.h>
void my_strcpy(char *dest,char*src);

int main() {
    char src[] = "sunbeam";
    char dest[39];
    my_strcpy(dest,src);
    printf("src = %s\n",src);
    printf("dest = %s\n",dest);

    return 0;
}

void my_strcpy(char *dest,char*src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}