// Admin (id, name, salary, allowance) 

#include<stdio.h>
struct Admin 
{
	int id;
	char name[20];
	double salary;
	double allowance;
};
struct Admin storeAdmin();
void displayAdmin(struct Admin);

void main()
{
	struct Admin a1;
	printf("enter details of Admin: ");
	
	a1=storeAdmin();
	
	printf("Admin details are: ");
	displayAdmin(a1);
}

struct Admin storeAdmin()
{
	struct Admin a1;
	printf("\n enter id");
	scanf("%d",&a1.id);
	printf("\n enter name");
	scanf("%s",a1.name);
	printf("\n enter salary");
	scanf("%lf",&a1.salary);
	a1.allowance=a1.salary*0.10;
	return a1;
}

void displayAdmin(struct Admin a1)
{
	printf("\n id is %d:\n name is %s:\n salary is %lf:\n allowance is %lf",a1.id,a1.name,a1.salary,a1.allowance);
}