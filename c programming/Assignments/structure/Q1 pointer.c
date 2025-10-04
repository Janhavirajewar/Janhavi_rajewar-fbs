// Student (rollNo, name, marks) :

#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[20];
	int marks;
}student;
void storestudent(student*);
void displaystudent(student*);
void main()
{
  	 student s1,s2;
	 
	 printf("enter student details");
	 
	 storestudent(&s1);
	 printf("\n student details are:");
	displaystudent(&s1);
	
	 printf("\n enter student 2 details");
	 
	 storestudent(&s2);
	 printf("\n student details are:");
	displaystudent(&s2);
}
void storestudent(student*s1)
{
	//struct student s1;
	printf("\nenter roll no:");
	scanf("%d",&s1->rollno);
	printf("\nenter name:");
	scanf("%s",s1->name);
	printf("\nenter marks:");
	scanf("%d",&s1->marks );
}

void displaystudent(student*s1)
{
	
	printf("\n  %d",s1->rollno);
	printf("\n  %s ",s1->name);
	printf("\n  %d",s1->marks );
}
