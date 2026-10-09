#include <stdio.h>
int main() {
    const float PI = 3.14;
    //float const PI = 3.14;  optional
     printf("PI = %.2f\n",PI);// 3.14
    // PI = 2.14; error
    // printf("PI = %.2f\n",PI);
     float *fptr = &PI;
     *fptr = 2.14;
     printf("PI = %.2f\n",PI);

     return 0;

}