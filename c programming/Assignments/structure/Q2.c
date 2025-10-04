// Employee (id, name, salary):

#include<stdio.h>
typedef struct Employee
{
	int id;
	char name[20];
	double salary;	
} Employee;

Employee storeEmployee();
void displayEmployee(Employee);

void main()
{
	Employee e1;
	printf("Enter Employee Details:");
	e1=storeEmployee();
	
	printf("Employee details:");
	displayEmployee(e1);
	
}
 Employee storeEmployee()
{
	Employee e1;
	printf("\n enter id:");
	scanf("%d",&e1.id);
	printf("\n enter name");
	scanf("%s",e1.name);
	printf("\n enter salary");
	scanf("%lf",&e1.salary);
	
	return e1;
}

void displayEmployee( Employee e1)
{
	printf("id=%d \n name=%s \n salary=%lf",e1.id,e1.name,e1.salary);
}