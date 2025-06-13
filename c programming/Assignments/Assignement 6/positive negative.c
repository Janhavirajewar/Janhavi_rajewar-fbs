#include<stdio.h>
int positiveneg();

void main()
{
	int i;
   i=positiveneg();
   if(i==0)
   printf("positive");
   else if(i==1)
   printf("negative");
   else
   printf("neutral");

}

int positiveneg()
 {
	int num;
	printf("enter number: ");
	scanf("%d",num);
	if(num>0)
	{
		return 0;
	}
	else if(num<0)
		{
					
			return 1;
		}
	
  }  
