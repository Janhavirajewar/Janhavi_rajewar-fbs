void salary();
void main()
{
	salary();
	
}
void salary()
{
	double salary=4000;
	 double da,ta,hra,tsal;
	 
	 	if(salary<=5000)
	 	    {
		 
	 			da=salary*0.10;
	 			ta=salary*0.20;
	 			hra=salary*0.25;
			}
		else
	 		
			{
				da=salary*0.15;
				ta=salary*0.25;
				hra=salary*0.30;
			}
				tsal=da+ta+hra;
				printf("tsal is %lf ",tsal);
}