// SalesManager (id, name, salary, incentive, target) 

#include<stdio.h>
typedef struct SalesManager
{
	int id;
	char name[20];
	double salary;
	double actualsales;
	double target;
	double incentive;
	
}salesmanager;
void store(salesmanager*);
void display(salesmanager*);
void main()
{
	salesmanager s1;
	printf("\n enter details:");
	
	store(&s1);
	
	printf("\n details are:");
	
	display(&s1);
}

void store(salesmanager*s1)
{
	
	printf("\n enter id:");
	scanf("%d",&s1->id);
	printf("\n enter name:");
	scanf("%s",s1->name );
	printf("\n enter salary:");
	scanf("%lf",&s1->salary);
	printf("\n enter actual sales:");
	scanf("%lf",&s1->actualsales);
	printf("\n enter target:");
	scanf("%lf",&s1->target);
	
	if(s1->target>s1->actualsales)
	{
		s1->incentive=s1->actualsales*0.10;
	}
	else
	{
		s1->incentive=0;	
	}
	
	
}
void display(salesmanager*s1)
{
	printf("\n id is %d",s1->id);
	printf("\n name is %s",s1->name);
	printf("\n salary is %lf",s1->salary );
	printf("\n actual sales are %lf",s1->actualsales);
	printf("\n target is %lf",s1->target);
	printf("\n incentive is %lf",s1->incentive );
}

