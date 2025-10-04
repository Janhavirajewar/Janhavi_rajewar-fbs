// Student (rollNo, name, marks) :

#include<stdio.h>
typedef struct student
{
	int rollno;
	int marks;
}student;

void main()
{
   	student srr[1];
	 
	 printf("enter student details");
	 
	 printf("enter roll no, name ,marks");
	 scanf("%d",&srr[0].rollno );
	 scanf("%d",&srr[0].marks);
	 
	 printf("roll no is %d",srr[0].rollno);
	 printf("marks is %d",srr[0].marks);
	 
	  printf("enter student details");
	 
	 printf("enter roll no, name ,marks");
	 scanf("%d",&srr[1].rollno );
	 scanf("%d",&srr[1].marks);
	 
	 printf("roll no is %d",srr[1].rollno);
	 printf("marks is %d",srr[1].marks);
}

