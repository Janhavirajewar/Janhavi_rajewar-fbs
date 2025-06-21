#include<stdio.h>
void main()
{
	int unit,t;
	printf("Enter units: ");
	scanf("%d",&unit);
	printf("\n your units are %d",unit);
	if(unit<=1||unit<=50)
	{
		t=unit*30;
		printf("\n total unit is %d",t);
	}
	else if(unit>=51||unit<151)
	{
		t=unit*40;
		printf("\n total unit is %d",t);
	}
	else if(unit>151)
	{
		t=unit*50;
		printf("\n total unit is %d",t);	
	}
	else
	{
		printf("\n invalid");
	}
}