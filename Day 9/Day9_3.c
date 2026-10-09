#include <stdio.h>
int main() {

    int num1 = 26;
    int *ptr =&num1;//*ptr it is a pointer now 

    char ch = 'A';
    char *cptr = &ch;//c*ptr is a pointer 

    float fvar = 1.3f;
    float *fptr = &fvar;

    double dvar = 2.4;
    double *dptr = &dvar;

    printf("num1 is : %d\n",num1);
    printf("size of num1 is %d\n",sizeof(num1));

    //pointer value through compiler 32 bit compiler - 4 byte and 64 bit compiler - 8 byte

    printf("size of ptr is %u\n",sizeof(ptr)); //ptr (pointer value ) //8
    printf("size of cptr is %u\n",sizeof(cptr)); //8
    printf("size of fptr is %u\n",sizeof(fptr)); //8
    printf("size of dptr is %u\n",sizeof(dptr)); //8

    printf("size of *ptr is %u\n",sizeof(*ptr)); //*ptr (value at ptr) means store interger num1 value //4
    printf("size of *cptr is %u\n",sizeof(*cptr));//*cptr (value at cptr) means store char ch value  //1
    printf("size of *fptr is %u\n",sizeof(*fptr));//*fptr (value at dptr) means store float fvar value //4
    printf("size of *dptr is %u\n",sizeof(*dptr));//*dptr (value at fptr) means store double dvar value //8

}