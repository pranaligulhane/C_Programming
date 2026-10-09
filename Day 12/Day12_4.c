#include <stdio.h>
int main() {
    char *ptr1 = "sunbeam";
    char *ptr2 = "sunbeam";

    if(ptr1 == ptr2) {
        printf("String are equal\n");
    }
    else {
        printf("astring are not ewual\n");
    }
}//string are equal beause of in RO section it create only one str beacuse of string are same so it point to one pointer
