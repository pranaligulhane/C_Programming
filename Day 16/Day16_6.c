#include <stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main() {
    struct student s1 = {1,"OM",80};
    struct student s2;

    s2 = s1;
    
    printf("rollno = %d name = %s marks = %.2f\n,s1.rollno,s1.name,s1.marks");
    printf("rollno = %d name = %s marks = %.2f\n",s2.rollno,s2.name,s2.marks);

}
