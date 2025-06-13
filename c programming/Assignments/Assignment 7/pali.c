#include<stdio.h>
void pali(int);
int main() {
	int n;
	printf("Enter no: ");
	scanf("%d",&n);
	pali(n);
}
void pali(int num)
{
	int r1,q1,r2,r3,rev,sum;
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	r3=q1/10;
	sum=r1+r2+r3;
	rev=r1*100+r2*10+r3;

	if(rev==num) {
		printf("\n number is palindrome");
	} else {
		printf("\n \t number is not palindrome");
	}

	printf("\n \t sum of digit is %d",sum);
	printf("\n \t reverse of num id %d",rev);

}