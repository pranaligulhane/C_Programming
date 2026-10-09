#include <stdio.h>
int addition (int,int,int);
int main() {
    int result = addition(10,20,30);
    printf("Result : %d\n",result); 
    result = addition(100,20,30);
    printf("Result : %d\n",result); 
    result = addition(18,20,30);
    printf("Result : %d\n",result); 

}
int addition(int a,int b,int c){
    int result = a+b+c;
    return result;
}