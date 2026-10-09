#include <stdio.h>
#include<string.h>
int main() {
    char str1[] = "sunBeam";
    char str2[] = "sunbeam";

    int result = strcmp(str1,str2);
    printf("result = %d\n",result);
    if(result == 0) {
        printf("String are equal\n");
    }
    else if(result > 0){
        printf("Str1 is greater\n");
    }
    else {
        printf("str2 is greater\n");
    }

}

 //strcmp = 0 strings are equal
//       = 1 if str1 is greater
//       = -1 if str2 is greater
