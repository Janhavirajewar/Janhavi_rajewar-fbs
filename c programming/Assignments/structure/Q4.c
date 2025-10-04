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
	
}SalesManager;
SalesManager store();
void display(SalesManager);
void main()
{
	SalesManager s1;
	printf("\n enter details:");
	
	s1=store();
	
	printf("\n details are:");
	
	display(s1);
}

SalesManager store()
{
	SalesManager s1;
	printf("\n enter id:");
	scanf("%d"&,s1.id);
	printf("\n enter name:");
	scanf("%s",s1.name );
	printf("\n enter salary:");
	scanf("%lf",&s1.salary);
	printf("\n enter actual sales:");
	scanf("%lf",&s1.actualsales);
	printf("\n enter target:");
	scanf("%lf",&s1.target);
	
	if(s1.target>s1.actualsales)
	{
		s1.incentive=s1.actualsales*0.10;
	}
	else
	{
		s1.incentive=0;	
	}
	
	return s1;
	
}
void display(SalesManager s1)
{
	printf("id is %d",s1.id);
	printf("name is %s",s1.name);
	printf("salary is %lf",s1.salary );
	printf("actual sales are %lf",s1.actualsales);
	printf("target is %lf",s1.target);
	printf("incentive is %lf",s1.incentive );
}

