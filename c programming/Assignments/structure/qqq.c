// Student (rollNo, name, marks) :

#include<stdio.h>
typedef struct student
{
	int rollno;
	int marks;
}student;
void store(student*);
void display(student*);
void main()
{
   	student srr[2];
	 
	 printf("enter student details");
	 store(srr);
	
	 printf("student deatils:");
	 display(srr);
}
void store(student*srr)
{

	for(int i=0;i<2;i++)
	 {
	 	 scanf("%d",&srr[i].rollno );
		 scanf("%d",&srr[i].marks);
	 }
	
}
void display(student*s)
{
	for(int i=0;i<2;i++)
	 {
	 printf("\n roll no is %d",s[i].rollno);
	 printf("\n marks is %d",s[i].marks);
	}
}

