 // swapping complex no:
 #include<stdio.h>
typedef struct complex
{
	int real,im,t;
}complex;

void main()
{
	complex c1;
	printf("enter real and imaginary :");
	scanf("%d %d",&c1.real ,&c1.im);
	
	printf("\n complex no before:");
	printf("%d+%di",c1.real ,c1.im);
	
	 c1.t=c1.real ;
	c1.real=c1.im;
	c1.im=c1.t; 
	
	
	printf("\n complex no is :");
	printf("%d+%di",c1.real ,c1.im);
}