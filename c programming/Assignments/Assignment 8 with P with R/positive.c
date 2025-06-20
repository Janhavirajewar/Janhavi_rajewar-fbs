#include<stdio.h>
int positiveneg(int);

void main()
{
	int num;
	printf("enter number: ");
	scanf("%d",num);
	int i;
   i=positiveneg(num);
   if(i=1)
   printf("positive");
   else if(i==2)
   printf("negative");
}

int positiveneg(int num)
 {

	if(num>0)
	{
		return 1;
	}
	else if(num<0)
		{
					
			return 2;
		}
	
  }  
