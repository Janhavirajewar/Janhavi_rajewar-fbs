// HR (id, name, salary, commission) 

#include<stdio.h>

typedef struct HR
{
	int id;
	char name[20];
	double salary;
	double commission;
} HR;

HR storeHR();
void displayHR(HR);
void main()
{
	HR h1,h2,h3;
	printf("\n enter 1st HR details");
	
	h1=storeHR();
	
	printf("\n 1st HR details:");
	displayHR(h1);
	
	printf("\n enter 2nd HR details");
	
	h2=storeHR();
	
	printf("\n 2nd HR details:");
	displayHR(h2);
	
	printf("\n enter 3rd HR details");
	
	h3=storeHR();
	
	printf("\n 3rd HR details:");
	displayHR(h3);
}

HR storeHR()
{
	HR h1;
//	printf("\n enter id:\n enter name:\n enter salary :");
	scanf("%d",&h1.id);
	scanf("%s",h1.name);
	scanf("%lf",&h1.salary);
	h1.commission=h1.salary *10/100;
	
	return h1;
}

void displayHR(HR h1)
{
	printf("\n id is %d",h1.id);
	printf("\n name is %s",h1.name);
	printf("\n salary is %lf",h1.salary);
	printf("\n commission is %lf",h1.commission);
}