 #include<stdio.h>
 int evenodd();
 void main()
 {
 	if(evenodd())
 	printf("even");
 	else
 	printf("odd");
 
 }
 int evenodd()
 {
 	int num;
 	printf("enter number");
 	scanf("%d",&num);
 	return (num%2==0);
 	
 }