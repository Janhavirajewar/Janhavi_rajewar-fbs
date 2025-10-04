#include<stdio.h>

typedef struct complex
{
	int real;
	int imaginary;
}complex;
complex add(complex,complex);
void display(complex);
void main()
{
	complex c1,c2,c3;
	printf("enter real and complex");
	scanf("%d %d",&c1.real,&c1.imaginary);
	
	printf("enter real and complex");
	scanf("%d %d",&c2.real,&c2.imaginary);
	
	c3=add(c1,c2);
	
	display(c3);
	
	c1=add(c2,c3);
	display(c1);
	
	c2=add(c1,c3);
	display(c2);
	
}

 complex add(complex c1,complex c2)
{
	complex t;
	t.real=c1.real+c2.real;
	t.imaginary=c1.imaginary+c2.imaginary;
	
	return t;
}

void display(complex x)
{
	printf(" \n addition is: %d+%di",x.real,x.imaginary );
//	printf("\n imaginary addition is %di",c3.imaginary);
}