// Admin (id, name, salary, allowance)
#include<stdio.h>
typedef struct Admin 
{
	int id;
	char name[20];
	double salary;
	double da,ta,hra;
	double allowance;
	double total;
	
}Admin;
void main()
{
	Admin srr[3];

	for(int i=0;i<3;i++)
	{
			printf("enter id, name ,and salary");
		scanf("%d",&srr[i].id);
		scanf("%s",srr[i].name );
		scanf("%lf",&srr[i].salary);			
	}	
	 printf("\n----------------------------------------------------------------------------------------------");
    printf("\n%-5s %-10s %-10s %-10s %-10s %-10s %-12s %-10s", 
           "ID", "Name", "Salary", "DA", "TA", "HRA", "Allowance", "Total");
    printf("\n----------------------------------------------------------------------------------------------");
	for(int i=0;i<3;i++)
	{
			if(srr[i].salary>5000)
		{
			srr[i].da=srr[i].salary*0.10;
			srr[i].ta=srr[i].salary*0.20;
			srr[i].hra=srr[i].salary*0.15;
		}
		else{
			srr[i].da=srr[i].salary*0.1;
			srr[i].ta=srr[i].salary*0.15;
			srr[i].hra=srr[i].salary*0.25;
		}
			srr[i].allowance=srr[i].da+srr[i].ta+srr[i].hra;
			srr[i].total=srr[i].salary+srr[i].allowance;
	
	printf("\n%-5d %-10s %-10.2lf %-10.2lf %-10.2lf %-10.2lf %-12.2lf %-10.2lf",
               srr[i].id, srr[i].name, srr[i].salary, srr[i].da,
               srr[i].ta, srr[i].hra, srr[i].allowance, srr[i].total);
	}
	
}