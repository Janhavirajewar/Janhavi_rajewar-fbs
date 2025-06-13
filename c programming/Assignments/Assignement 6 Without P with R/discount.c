#include<stdio.h>
double discount();
void main() {

	double p=discount();
	printf("total is %lf",p);
	
}
double discount(){
	double price,d,tprice;
	printf("Enter price");
	scanf("%lf",&price);
	char isstudent='n';
	
	if(isstudent=='y')
	{
		if(price>=500) {
			d=price*0.20;		
	    }
	 else 
	   {
	    	d=price*0.10;	
		}		
   }
 else
	{
		if(price>=600) {
			d=price*0.15;			 
		} 	
		else
		{
			d=0;
		}
	}
	tprice=price-d;
	return tprice;
	
}