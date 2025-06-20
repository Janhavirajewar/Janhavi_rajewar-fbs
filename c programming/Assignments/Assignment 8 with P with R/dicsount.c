#include<stdio.h>
double discount(double);
void main() {
	double price;
	printf("enter price: ");
	scanf("%lf",&price);
	double p=discount(price);
	printf("total is %lf",p);
	
}
double discount(double price){
	double d,tprice;
	char isstudent='y';
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