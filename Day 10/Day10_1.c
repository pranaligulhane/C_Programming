#include<stdio.h>
int main() {
    int num1 = 10;
    int *ptr = &num1;
    int **p_ptr = &ptr;

    printf("num1 = %d\n",num1); //10
    printf("&num1 = %u\n",&num1); //100
    printf("num1 = %d\n",num1); //10
    printf("&num1 = %u\n",&num1); //100
    printf("ptr = %u\n",ptr); //100
    printf("*ptr = %d\n",*ptr); //10
    printf("p_ptr = %u\n",p_ptr); //200
    printf("**p_ptr = %d\n",**p_ptr); //10

//Output : 

//num1 = 10
// &num1 = 2231368 996
// num1 = 10
// &num1 = 2231368 996
// ptr = 2231368 996
// *ptr = 10
// p_ptr = 2231368 984
// **p_ptr = 10

}