//Write a C program to swap two numbers using a temporary third variable.

void main(){
	int a=10;
	int b=20;
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf(" before swapping no is %d,%d \n", a,b);
	printf(" after swapping nos are %d,%d \n", a,b);
	
}