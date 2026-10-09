// Preprocessor error
#include<stdio.h>
#define PI 3.14
int main(){
    #ifndef PI
        #error "PI is not defined!!!!!"
    #else
        printf("PI is defined\n");
    #endif
}