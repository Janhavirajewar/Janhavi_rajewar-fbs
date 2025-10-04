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
	
}

 complex add(complex c1,complex c2)
{
	complex t;
	t.real=c1.real+c2.real;
	t.imaginary=c1.imaginary+c2.imaginary;
	
	return t;
}

void display(complex c3)
{
	printf(" addition is: %d+%di",c3.real,c3.imaginary );
//	printf("\n imaginary addition is %di",c3.imaginary);
}