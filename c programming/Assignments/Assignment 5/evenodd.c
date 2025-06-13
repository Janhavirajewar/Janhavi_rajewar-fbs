void oddeven();

void main()
{
	oddeven();
}
 void oddeven()
 {
 	int num;
 	printf("enter num: ");
 	scanf("%d",&num);
 	
 	if(num%2==0)
 	{
 		printf("%d is even number",num);
	 }
	 else
	 {
	 	printf("\n %d is odd number",num);
	 }
 }