#include<stdio.h>
void discount(double);
void main() {
	
	double price;
	printf("Enter price");
	scanf("%lf",&price);
	discount(price);

}
void discount(double price)
{
    double d,tprice;
	char ch='n';
	if(ch=='y')
	{
		if(price>=500) {
			d=price*0.20;
			tprice=price-d;
	    }
	 else 
	   {
				d=price*0.10;
				tprice=price-d;
		}
	 
}
 else
	{
		if(price>=600) {
			d=price*0.15;
			tprice=price-d;
		} else {
			printf("not discount");
		}
	}
	printf("%lf",tprice);

	
}