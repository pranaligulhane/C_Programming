#include<stdio.h>
int main() {
    char depts[][50] = {"Hr","Sales","Marketing","Training"};
    printf("depts[1] = %s\n",depts[1]); // Sales

    printf("depts[2][3] = %c\n",depts[2][3]);// k array notation
    
    printf("*(*(depts+2)+3) = %c\n",*(*(depts+2)+3)); //k
    printf("*(*(depts+2)+3) = %c\n",*(*(depts+2)+3)+2); //m

    printf("sizeof depts = %u\n",sizeof(depts)); // 200
    printf("sizeof depts[1] = %u\n",sizeof(depts[1]));  //50
    printf("sizeof depts[1][1] = %u\n",sizeof(depts[1][1]));  //1

  

}