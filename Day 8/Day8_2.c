#include <stdio.h>
//void fun();
int num1;
extern int num2;
int main() {
    int num1 = 10;
    printf("num1 in main :%d\n",num1);

    fun();
    printf("num2 in main : %d\n",num2);

}

int num2 = 26;
void fun(){
    num1 = num1 + 2;
    printf("num1 in fun : %d\n",num1);
}