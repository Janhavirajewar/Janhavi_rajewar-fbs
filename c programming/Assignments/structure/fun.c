#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[20];
	int marks;
}student;
student store();
void display(student );
void main()
{ 
	student s1,s2,s3,s4,s5;
	printf("enter deatils of 1student :");
	
	s1=store();
		printf("\n student 1st deatils:");
	display(s1);
	
	s2=store();
		printf("\n student  2nd  deatils:");
	display(s2);
	
	s3=store();
		printf("\n student 3rd deatils:");
	display(s3);
	
	s4=store();
		printf("\n student 4th  deatils:");
	display(s4);
	
	s5=store();
		printf("\n student 5th deatils:");
	display(s5);
	
}
student store()
{
	student s;
	printf("\n enter rollno: enter name:enter marks:");
	scanf("%d%s%d",&s.rollno,s.name ,&s.marks );
	return s;
}

void display(student s)
{

	printf("\n %d %s %d",s.rollno,s.name ,s.marks );
}
