// Distance ( feet, inch) 

// 12 inches = 1 foot

#include<stdio.h>
 typedef struct Distace
 {
 	int inche;
 	int feet;
 	
 }Distance;
 Distance storeDistance();
 Distance displayDisatnce(Distance);
void main()
{
	Distance d1;
	printf("enter distance in inche and feet");
	
	d1=storeDistance();
	printf("distance is :");
	displayDisatnce(d1);
}

Distance storeDistance()
{
		Distance d1;
		printf("\n enter inches");
		scanf("%d",&d1.inche);
		printf("\n enter feet");
		scanf("%d",&d1.feet);
		
		if(d1.inche>=12)
		{
			d1.feet = d1.feet+ d1.inche/12;    // Convert extra inches to feet
        	d1.inche= d1.inche % 12; 
		}
		
		
		return d1;
}

Distance displayDisatnce(Distance d1)
{
	printf("distance: %d:%d",d1.feet,d1.inche);
}