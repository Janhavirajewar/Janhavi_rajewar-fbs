//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage
#include<stdio.h>
#include<conio.h>
int main()
{
	float s1=76.4,s2=80.6,s3=70.7,s4=50.6,s5=60.0;
	float total,percentage;
	total=s1+s2+s3+s4+s5;
	percentage=total/500*100;
	printf("total marks is %f \n",total);
	printf("percentage is %f \n",percentage);
}