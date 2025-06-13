#include<stdio.h>
void positiveneg();

void main()
{
	positiveneg();

}

void positiveneg()
 {
	int num=0;
	if(num>0)
	{
		printf("%d is positive number",num);
	}
	else if(num<0)
		{
					
			printf("%d is negative number",num);
		}
	else
		{
			printf("%d is neutral no",num);
		}
  }  
