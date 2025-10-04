#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[20];
	int marks;
}student;

void main()
{ 
	student s1,s2,s3,s4,s5;
	printf("enter deatils of 1student :");
	
	printf("\n enter rollno: enter name:enter marks:");
	scanf("%d %s %d",&s1.rollno,s1.name ,&s1.marks );
	
	printf("\n deatils of 1student :");
	
	printf("\n rollno is %d \n name is %s \n marks are %d",s1.rollno,s1.name ,s1.marks );
	
	printf("enter deatils of 2nd student :");
	
	printf("\n enter rollno:\n enter name:\n enter marks:");
	scanf("%d %s %d",&s2.rollno,s2.name ,&s2.marks );
	
	printf("\n deatils of 2nd student :");
	
	printf("\n rollno is %d \n name is %s \n marks are %d",s2.rollno,s2.name ,s2.marks );

	printf("enter deatils of 3rd student :");
	
	printf("\n enter rollno:\n enter name:\n enter marks:");
	scanf("%d %s %d",&s3.rollno,s3.name ,&s3.marks );
	
	printf("\n deatils of3rd student :");
	
	printf("\n rollno is %d \n name is %s \n marks are %d",s3.rollno,s3.name ,s3.marks );
	
	printf("enter deatils of 4th student :");
	
	printf("\n enter rollno:\n enter name:\n enter marks:");
	scanf("%d %s %d",&s4.rollno,s4.name ,&s4.marks );
	
	printf("\n deatils of 4th student :");
	
	printf("\n rollno is %d \n name is %s \n marks are %d",s4.rollno,s4.name ,s4.marks );
	
		printf("enter deatils of 5th student :");
	
	printf("\n enter rollno:\n enter name:\n enter marks:");
	scanf("%d %s %d",&s5.rollno,s5.name ,&s5.marks );
	
	printf("\n deatils of 5th student :");
	
	printf("\n rollno is %d \n name is %s \n marks are %d",s5.rollno,s5.name ,s5.marks );
	
}