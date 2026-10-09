#include <stdio.h>
#define PI 3.14
int main(){
    #ifdef PI 
        printf("PI is defined\n");
    #else
        printf("PI is not defined\n");
    #endif

}
