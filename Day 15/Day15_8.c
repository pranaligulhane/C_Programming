#include <stdio.h>
#include <string.h>
struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct student s1 = {1,"OM",80};

    struct student s2;
    s2.rollno = 2;
    strcpy(s2.name, "Ram");
    s2.marks = 70;

    struct student s3;
    printf("enter the rollno\n");
    scanf("%d",&s3.rollno);

    printf("enter the name\n");
    scanf("%s",&s3.name);

    printf("enter the marks\n");
    scanf("%f",&s3.marks);

    printf("s1 : rollno = %d name = %s marks = %.2f\n",s1.rollno,s1.name,s1.marks);

    printf("s2 : rollno = %d name = %s marks = %.2f\n",s2.rollno,s2.name,s2.marks);

    printf("s3 : rollno = %d name = %s marks = %.2f\n",s3.rollno,s3.name,s3.marks);

}
  

