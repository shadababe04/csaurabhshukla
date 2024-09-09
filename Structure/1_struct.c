#include <stdio.h>

//TODO: 1.Define a structure Employee with member variables id, name, salary
//TODO: 2.WAF to take input employee data from user

struct Employee
{
    /* data */
    int id;
    char name[20];
    int salary;
};

void getData()
{
    struct Employee E1;
    printf("Enter the id");
    scanf("%d",&E1.id);
    printf("Enter the name");
    scanf("%s",E1.name);
    printf("Enter the Slary");
    scanf("%d",&E1.salary); 
}
int main() {
    
    
    return 0;
}