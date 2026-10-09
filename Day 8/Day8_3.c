#include <stdio.h>
int main() {

    fun();
    fun();
    fun();
    fun2();
    fun2();
    fun2();

}

void fun() {
    int num1 = 10;
    printf("Num is : %d\n",num1); //10 10 10 
    num1++;
}

void fun2() {
    static int num1 = 10;
    printf("Num is : %d\n",num1); //10,11,12
    num1++;
}