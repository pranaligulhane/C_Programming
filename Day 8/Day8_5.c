
#include<stdio.h>
int my_fact(int);
int main(){
    int n1 = 5;
    int result = my_fact(n1);
    printf("result = %d\n",result);

}
int my_fact(int num1){
    if(num1 == 0)
        return 1;
    int result = num1*my_fact(num1-1);
    return result;
}


