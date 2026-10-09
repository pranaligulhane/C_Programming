#include <stdio.h>
int main() {
    float fvar = 5/3;
    printf("fvar = %.2f\n",fvar); // output will be 1.00 because of 5/3 they consider the int value so it dived int value 

    float fvar1 = (float)5/3;
    printf("fvar = %.2f\n",fvar1); // Output will be fvar = 1.67 upcasting 

    int num = 3.5;
    printf("Number : %d\n",num);

    return 0;
}