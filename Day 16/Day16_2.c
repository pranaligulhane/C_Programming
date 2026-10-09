#include <stdio.h>
#define SIZE 3

struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct student std[SIZE];
    printf("Enter the Student details:\n");
    for (int i = 0; i<SIZE;i++) {
        printf("student %d\n",i+1);
        printf("Enter the rollno:\n");
        scanf("%d",&std[i].rollno);

        printf("Enter the name:\n");
        scanf("%s",&std[i].name);

        printf("Enter the marks:\n");
        scanf("%f",&std[i].marks);
    }

    printf("student data :\n");
    for(int i = 0; i<SIZE;i++) {

        printf("rollno = %d name = %s marks = %.2f\n",std[i].rollno,std[i].name,std[i].marks );
    }
}