#include<stdio.h>
void fun();
int main(){
       
    fun();
    fun();
    fun();
}
void fun(){
     int num1 ;
     num1 = 10;
     printf("num1 = %d\n",num1); // 10 10 10
     num1 = num1 + 2;
}
