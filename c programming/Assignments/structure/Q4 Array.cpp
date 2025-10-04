// SalesManager (id, name, salary, incentive, target) 
#include<stdio.h>
typedef struct Admin 
{
	int id;
	char name[20];
	double salary;
	double incentive,target;
	double total;
	
}Admin;
int main()
{
	Admin srr[3];

	for(int i=0;i<3;i++)
	{
			printf("enter id, name ,and salary,target");
		scanf("%d",&srr[i].id);
		scanf("%s",srr[i].name );
		scanf("%lf",&srr[i].salary);
		scanf("%lf",&srr[i].target);
					
	}	
	 printf("\n------------------------------------------------------------------------");
    printf("\nID------Name------Salary------ target-------incentive-------Total");
    printf("\n----------------------------------------------------------------------------");
	for(int i=0;i<3;i++)
	{
		if(srr[i].target>10000)
		{
			srr[i].incentive=srr[i].salary*0.20;
		}
		else if(srr[i].target>5000)
		{
				srr[i].incentive=srr[i].salary*0.15;
		}
		else
		{
		 	srr[i].incentive=srr[i].salary*0.10;	
		}
			srr[i].total=srr[i].salary +srr[i].incentive;
	
	printf("\n%-5d %-10s %-10.2lf %-10.2lf %-10.2lf  %-10.2lf",
               srr[i].id, srr[i].name, srr[i].salary,srr[i].target, 
              srr[i].incentive , srr[i].total);
	}
	
}