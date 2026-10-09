#include <stdio.h>
struct student{
    int rollno;
    struct full_name{
        char f_name[10];
        char m_name[10];
        char l_name[10];
    }name;
    float marks;
};

int main() {
    struct student s1;
    printf("enter the rollno: \n");
    scanf("%d",&s1.rollno);

     printf("enter the name:\n");
    scanf("%s%s%s",&s1.name.f_name,&s1.name.m_name,&s1.name.l_name);

    printf("enter the marks:\n");
    scanf("%f",&s1.marks);

    printf("roll no = %d\n",s1.rollno);
    printf("%s %s %s\n",s1.name.f_name,s1.name.m_name,s1.name.l_name);
    printf("marks = %.2f\n",s1.marks);

    return 0;
}