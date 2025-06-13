#include<stdio.h>
void gender(int);
void main() {
	int a;
	printf("Enter age:");
	scanf("%d",&a);
	gender(a);
}
void gender(int age) {
	char ch;
	printf("\n Enter gender: ");
	fflush(stdin);
	scanf("%c",&ch);
	if(age==18 ) {
		if(ch=='f') {
			printf("gender is female and eligible for marriage");
		}
	}

	else {
		if(age==21) {
			if(ch=='m') {
				printf("male and eligible for marrige");
			}
	
		}
		
			printf("invalid");
	}
}

