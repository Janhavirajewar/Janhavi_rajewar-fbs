// Distance ( feet, inch) 

// 12 inches = 1 foot

#include<stdio.h>
 typedef struct Distace
 {
 	int inche;
 	int feet;
 	
 }Distance;
Distance* storeDistance(Distance*,int);
void displayDisatnce(Distance*,int);
void main()
{
	Distance srr[3];
	printf("enter distance in inche and feet");
	
	storeDistance(srr,3);
	printf("distance is :");
	displayDisatnce(srr,3);
}

Distance*storeDistance(Distance*srr,int s)
{
		for(int i=0;i<s;i++)
		{
			printf("\n enter inches");
			scanf("%d",&srr[i].inche);
			printf("\n enter feet");
			scanf("%d",&srr[i].feet);
			
			if(srr[i].inche>=12)
			{
				srr[i].feet = srr[i].feet+ srr[i].inche/12;    // Convert extra inches to feet
	        	srr[i].inche= srr[i].inche % 12; 
			}
			
        }
		
		return srr;
}

void displayDisatnce(Distance*srr,int s)
{
	for(int i=0;i<s;i++)
	{
	printf("\n distance: %d:%d",srr[i].feet,srr[i].inche);
    }
}