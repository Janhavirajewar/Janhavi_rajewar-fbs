// HR (id, name, salary, commission) 

#include<stdio.h>

typedef struct HR
{
	int id;
	char name[20];
	double salary;
	double target;
	double commission;
}HR;

void storeHR(HR*);
void displayHR(HR*);
void storeHR(HR*);
void displayHR(HR*);
void storeHR(HR*);
void displayHR(HR*);
void main()
{
	HR h1,h2,h3;
	printf("\n enter 1st HR details");
	
	storeHR(&h1);
	
	printf("\n 1st HR details:");
	displayHR(&h1);
	
	printf("\n enter 2nd HR details");
	
	storeHR(&h2);
	
	printf("\n 2nd HR details:");
	displayHR(&h2);
	
	printf("\n enter 3rd HR details");
	
	storeHR(&h3);
	
	printf("\n 3rd HR details:");
	displayHR(&h3);
}

void storeHR(HR*h1)
{
//	printf("\n enter id:\n enter name:\n enter salary :");
	scanf("%d",&h1->id);
	scanf("%s",h1->name);
	scanf("%lf",&h1->salary);
	scanf("%lf",&h1->target);
	
	if(h1->target>10000)
	h1->commission=h1->salary*0.15;
	

}

void displayHR(HR*h1)
{
	printf("\n id is %d",h1->id);
	printf("\n name is %s",h1->name);
	printf("\n salary is %lf",h1->salary);
	printf("\n target is %lf",h1->target);
	printf("\n commission is %lf",h1->commission);
}