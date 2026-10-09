#include <stdio.h>
int addition();
int substract (int,int);
int main(){
    int n1,n2
    printf("Enter the two number :\n");
    sacnf("%d%d",&n1,&n2);

    int result = substract(n1,n2);
    printf("Result : %d",result);
    
    addition();
}

int substract(int num1,int num2){
    int result = num1-num2;
    return result;
}

int addition(int a, int b){
    printf("Enter the two number:\n");
    scanf("%d%d",&a,&b);

    int result = a + b;
    printf("Result : %d",result);

}
