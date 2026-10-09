#include <stdio.h>
//#pragma pack(1)
struct student {
    int rollno;
    char name[20];
    char grade;
};
int main() {
    struct student s1;
    printf("size of struct student =  %u\n",sizeof(s1));
    printf("size of struct student =  %u",sizeof(struct student));
}