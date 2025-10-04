// Student (rollNo, name, marks) :

#include<stdio.h>
	struct student
{
	int rollno;
	char name[20];
	int marks;
};
struct student storestudent();
void displaystudent(struct student);
void main()
{
   	struct student s1;
	 
	 printf("enter student details");
	 
	 s1=storestudent(s1);
	 printf("student details are:");
	displaystudent(s1);
}
struct student storestudent(struct student s1)
{
	//struct student s1;
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
