#include<stdio.h>
#define sqr(x) x*x
#define swap(a,b) int temp = a; a=b; b=temp
int main() {
    printf("square = %d\n",sqr(5));
    printf("square = %d\n",sqr(5+3));

    int num1 = 25;
    int num2 = 50;
    printf("before swapping : num1 = %d num2 = %d\n",num1,num2);
    swap(num1,num2);
     printf("after swapping : num1 = %d num2 = %d\n",num1,num2);
    


}