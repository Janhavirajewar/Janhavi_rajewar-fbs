// Employee (id, name, salary):

#include<stdio.h>
typedef struct Employee
{
	int id;
	char name[20];
	double salary;	
} Employee;
void storeEmployee(Employee*);
void displayEmployee(Employee*);
void main()
{
	Employee e1,e2,e3;
	printf("Enter id , name and salary :");
	storeEmployee(&e1);
	
	printf("Enter id , name and salary :");
	storeEmployee(&e2);
	
	printf("Enter id , name and salary :");
	storeEmployee(&e3);
	
	displayEmployee(&e1);
	displayEmployee(&e2);
	displayEmployee(&e3);
}

void storeEmployee(Employee*e1)
{
//	printf("Enter id , name and salary :");
	scanf("%d",&e1->id);
	scanf("%s",e1->name);
	scanf("%lf",&e1->salary);
}

void displayEmployee(Employee*e1)
{
	printf("\n id :%d \n name :%s \n salary :%lf \n ",e1->id,e1->name,e1->salary);
	
}