
//  #include <stdio.h>
// int main() {
//      int num1 = 9;      // num1 is a local variable it access on that block only 
//      printf("Num is %d\n",num1);
//  }

// // Local 
// // Default value = Garbage
// // scope = block
// // life = block
// // storage = stack


#include<stdio.h>
void fun();
int main(){
    int num1 = 10;
    fun();
    register int num2;
    printf("num1 = %d\n",num1);
}
void fun(){
    // printf("num1 = %d\n",num1); error
}

//register variables
// default value = Garbage
// scope = block
// life = block
//storage = cpu register or stack
