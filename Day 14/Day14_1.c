#include<stdio.h>
int main() {
    char *ptr = "sunbeam";
    char *course[] = {"dac","dmc","dbda","dittis","desd"};
    printf("course[1] =%s\n",course[1]);
    printf("course[3][2] =%c\n",course[3][2]);
    //course[1][1] = 'a'; //runtime error
    //printf("course[1] = %s\n",course[1]);

    return 0;
}