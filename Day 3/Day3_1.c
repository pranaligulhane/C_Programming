#include <stdio.h>
int main() {
    char ch1 = 'A';
    char ch2 = 'B';
    
    unsigned char sum1 = 'A' + 'B';//65+66 = 131 beacuse range of unsigned char is 0 to 255
    printf("sum : %d\n",sum1);

    char sum = 'A' + 'B';//65+66 = -125 beacuse range will be char is -128 to 127 
    printf("sum : %d\n",sum);

    char ch3 = 500;
    printf("ch3 = %d\n",ch3); //-12 beacuse range will be signed range is -128 to 127

}