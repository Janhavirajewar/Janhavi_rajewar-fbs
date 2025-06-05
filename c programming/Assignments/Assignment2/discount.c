void main() {
	double price,d,tprice;
	printf("Enter price");
	scanf("%lf",&price);
	char isstudent='u';
	
	if(isstudent=='y')
	{
		if(price>=500) {
			d=price*0.20;
			tprice=price-d;
			printf("total is %lf",tprice);

		} else {
			d=price*0.10;
			tprice=price-d;
			printf("total is %lf",tprice);

		}
	} 
	else 
	{


		if(price>=600) {
			d=price*0.15;
			printf("total is %lf",tprice);


		} else {
			printf("not discount");
		}
	}
	
}