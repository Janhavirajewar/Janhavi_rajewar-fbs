#include<stdio.h>
void strong();
void main() {
	strong();
}
void strong() {

	int num,rem=0,fact=1,sum=0;
	printf("enter no: ");
	scanf("%d",&num);
	int t=num;
	while(num>0) {
		rem=num%10;

		fact=1;
		for(int i=1; i<=rem; i++) {
			fact=fact*i;
		}

		sum=sum+fact;
		num=num/10;
	}
	if(sum==t) 
		printf("strong no");
	else
		printf("not strong no");
}