// Product (id, name, quantity, price) 

#include<stdio.h>
typedef struct product
{
	int id;
	char name[20];
	int quantity;
	double price;
	
}product;
void main()
{
	product srr[4];
	for(int i=0;i<4;i++)
	{
		printf("enter id ,name ,quantity and price at index %d:",i+1);
		scanf("%d",&srr[i].id);
		scanf("%s",srr[i].name);
		scanf("%d",&srr[i].quantity );
		scanf("%lf",&srr[i].price);
	}
	
	 printf("\n%-5s %-10s %-10s %-25s\n", "ID", "Name", "Quantity",  "Price");
	for(int i=0;i<4;i++)
	{
		printf("\n %-4d %-15s %-10d %-7.2lf",srr[i].id,srr[i].name,srr[i].quantity ,srr[i].price );
	}
}