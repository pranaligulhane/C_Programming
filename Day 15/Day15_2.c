#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr = calloc(sizeof(int),5);
    if(ptr == NULL) {
        printf("memory is not allocated\n");
    }
    else {
        for(int i = 0; i<5; i++){
            ptr[i] = i+10;
        }
    }
    for(int i = 0; i<5;i++) {
        printf("%4d",ptr[i]);
    }

    printf("Realloac\n");
    ptr = realloc(ptr,sizeof(int)*7);
    ptr[5] = 60;
    ptr[6] = 70;

    printf("array elements\n");
     for(int i=0;i<7;i++) {
        printf("%4d",ptr[i]);
     }
     free(ptr);
     ptr = NULL;

}