#include <stdio.h>

//TODO: 1.Define a structure Employee with member variables id, name, salary


struct Employee
{
    /* data */
    int id;
    char name[20];
    int salary;
};

//TODO: 2.WAF to take input employee data from user
struct Employee getData()
{
    struct Employee E1;
    printf("Enter the id ");
    scanf("%d",&E1.id);
    printf("Enter the name ");
    //scanf("%s",E1.name);
    getchar();
    fgets(E1.name,sizeof(E1.name),stdin);
    printf("Enter the Slary ");
    scanf("%d",&E1.salary); 
    return E1;
}
int main() {
    struct Employee emp;
    emp = getData();

    printf("Display the details of employee:\n");
    printf("Employee id : %d\n", emp.id);
    printf("Employee name : %s",emp.name);
    printf("Employee Salary :%d\n",emp.salary);
    
    return 0;
}