// Complex (real, imaginary)

#include<stdio.h>

typedef struct complex
{
	double real;
	double imaginary;
	
}complex;
complex store();
void display(complex);
void main()
{
	complex c1;
	printf("enter no :real and imaginary: ");
	
	c1=store();
	
	printf("complex no is :");
	display(c1);
}
complex store()
{
	complex c1;
	printf("enter real part:");
	scanf("%lf",&c1.real);
	printf("enter imaginary part:");
	scanf("%lf",&c1.imaginary);
	
	return c1;
}

void display(complex c1)
{
	if(c1.imaginary>0)
	{
		printf("%lf+%lfi",c1.real ,c1.imaginary);
	}
	else
	{
		printf("%lf-%lfi",c1.real ,-c1.imaginary);
	}
}
