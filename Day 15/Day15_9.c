#include <stdio.h>
struct employee{
    int empid;
    char name[20];
    float salary;
}e1;

typedef struct student{
    int rollno;
    char name[20];
    float marks;
}std;

struct {
    int dd;
    int mm;
    int yy;
}d1, d2, d3;

typedef struct {
    int dd;
    int mm;
    int yy;
}date;

int main() {
    struct employee emp;
    typedef struct employee emp2;
    std s1;
    emp2 e3;
    date d5;

    return 0;
}