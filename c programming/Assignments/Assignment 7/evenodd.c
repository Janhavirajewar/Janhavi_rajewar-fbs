 #include<stdio.h>
 void evenodd(int);
 void main()
 {
 	int no;
 	printf("Enter number");
 	scanf("%d",&no);
 	evenodd(no);
 }
 void evenodd(int c)
 {
 	if(c==1)
 	{
 		printf("%d is even number",c);
	 }
	 else
	 {
	 	printf("\n %d is odd number",c);
	 }
 }