#include <stdio.h>
int main(int argc, char *argv[],char *env[]) {
    printf("arguments passed at runtime\n");
    for(int i = 0; i<argc;i++) {
        printf("%s",argv[i]);
    }
    printf("argument count (argc) = %d\n",argc);

    printf("Environment variables\n");
    for(int i = 0; i<10;i++) {
        printf("%s\n",env[i]);
    }
}