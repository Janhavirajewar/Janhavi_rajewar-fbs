// Complex (real, imaginary)

#include<stdio.h>

typedef struct complex
{
	int real;
	int imaginary;
	
}complex;
void store(complex*,int);
void display(complex*,int);
void main()
{
	complex srr[2];
	printf("enter no :real and imaginary: ");
	
	store(srr,2);
	
	printf("complex no is :");
	display(srr,2);
}
void store(complex*srr,int s)
{
	for(int i=0;i<s;i++)
	{
	printf("enter real part:");
	scanf("%d",&srr[i].real);
	printf("enter imaginary part:");
	scanf("%d",&srr[i].imaginary);
    }
//	return srr;
}

void display(complex*srr,int s)
{
	for(int i=0;i<s;i++)
	{
	if(srr[i].imaginary>0)
	{
		printf("\n%d+%di",srr[i].real,srr[i].imaginary);
	}
	else
	{
		printf("\n%d-%d",srr[i].real ,-srr[i].imaginary);
	}
}
}
