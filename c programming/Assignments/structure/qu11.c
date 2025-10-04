// Student (rollNo, name, marks) :

#include<stdio.h>
typedef struct student
{
	int rollno;
	int marks;
}student;

void main()
{
   	student srr[2];
	 
	 printf("enter student details");
	 for(int i=0;i<2;i++)
	 {
	 	 scanf("%d",&srr[i].rollno );
		 scanf("%d",&srr[i].marks);
	 }
	
	 printf("student deatils:");
	 
	 for(int i=0;i<2;i++)
	 {
	 printf("\n roll no is %d",srr[i].rollno);
	 printf("\n marks is %d",srr[i].marks);
	}
}


