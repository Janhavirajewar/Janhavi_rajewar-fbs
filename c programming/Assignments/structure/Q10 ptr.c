// Product (id, name, quantity, price)
#include<stdio.h>
typedef struct product
{
	int id;
	char name[20];
	int quantity;
	double price;
	
}product;
void store(product*);
void display(product*);
void main()
{
	product p1;
	
	printf("enter product details:");
	store(&p1);
	
	printf("product details:");
	
	display(&p1);
}

void store(product*p1)
{
//	product p1;
	
	printf("enter id \n enter name \n enter quantity \n enter price");
	scanf("%d %s %d %ld",&p1->id ,p1->name,&p1->quantity,&p1->price );
	return p1;
}

void display(product*p1)
{
	printf("id is %d : name is %s: quantity is %d :price is %ld ",p1->id,p1->name,p1->quantity,p1->price);
}

