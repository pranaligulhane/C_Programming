// Preprocessor directives __LINE__, __DATE__, __TIME__, __FILE__,
// #line
#include<stdio.h>
int main(){
    printf("current line = %d\n", __LINE__);
    printf("current Date = %s\n", __DATE__);
    printf("current TIME = %s\n", __TIME__);
    printf("current TIME = %s\n", __FILE__);
    #line 100
    printf("current line = %d\n", __LINE__);

    return 0;  
}

