// Passing structure to the function using address(pointer)
#include<stdio.h>
typedef struct employee{
    int empid;
    char name[20];
    float salary
}emp;
void accept_data(emp e1);
void print_data(emp e1);
int main(){
    emp e1;
    // accept_data(e1);
    // print_data(e1);

    accept_by_address(&e1);
    print_data(e1);



}
void accept_data(emp e1){
    printf("enter the employee details:\n");
    scanf("%d%s%f",&e1.empid,&e1.name,&e1.salary);
}

void accept_by_address(emp *ptr){
    printf("enter the employee details:\n");
    scanf("%d%s%f",&ptr->empid,&ptr->name,&ptr->salary);

}
void print_data(emp e1){
    printf("Employee details:\n");
    printf("empid = %d name = %s salary = %.2f\n",e1.empid,e1.name,e1.salary);
}
