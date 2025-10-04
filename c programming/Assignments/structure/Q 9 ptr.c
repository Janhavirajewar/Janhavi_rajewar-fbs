// Complex (real, imaginary)

#include<stdio.h>

typedef struct complex
{
	int real;
	int imaginary;
	
}complex;

void store(complex*);
void display(complex*);

void main()
{
	complex c1;
	printf("enter no :real and imaginary: ");
	
	store(&c1);
	
	printf("complex no is :");
	display(&c1);
}
void store(complex*c1)
{
	printf("enter real part:");
	scanf("%d",&c1->real);
	printf("enter imaginary part:");
	scanf("%d",&c1->imaginary);

}

void display(complex*c1)
{
	if(c1->imaginary>0)
	{
		printf("%d+%di",c1->real ,c1->imaginary);
	}
	else
	{
		printf("%d-%d",c1->real ,-c1->imaginary);
	}
}
