 #include<stdio.h>
 int evenodd(int);
 void main()
 {
 	int num;
 	printf("enter number");
 	scanf("%d",&num);
 	if(evenodd(num))
 	printf("even");
 	else
 	printf("odd");
 
 }
 int evenodd(int num)
 {
 	return (num%2==0);
 	
 }