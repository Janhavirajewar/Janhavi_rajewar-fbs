// Student (rollNo, name, marks) :

#include<stdio.h>
	typedef struct student
{
	int rollno;
	char name[20];
	int marks;
}student ;
struct student storestudent();
void displaystudent(struct student);
void main()
{
   	 student s1;
	 
	 printf("enter student details");
	 
	 s1=storestudent();
	 printf("student details are:");
	displaystudent(s1);
}
struct student storestudent()
{
	 student s1;
	printf("enter roll no:");
	scanf("%d",&s1.rollno);
	printf("enter name:");
	scanf("%s",s1.name);
	printf("enter marks:");
	scanf("%d",&s1.marks );
	
	return s1;
}

void displaystudent(struct student s1)
{
	printf("rollno is %d",s1.rollno);
	printf("name is  %s ",s1.name);
	printf("marks is %d",s1.marks );
}
