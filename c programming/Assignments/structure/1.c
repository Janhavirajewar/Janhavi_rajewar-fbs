#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	int marks;
	long long int mobno;
};

void main()
{
	struct student s1,s2;
	s1.rollno=102;
	strcpy(s1.name,"parth");
	s1.marks=80;
	s1.mobno=7020088544;
	
	printf("\n rollno =%d",s1.rollno );
	printf("\n name =%s",s1.name);
	printf("\n marks=%d",s1.marks );
	printf("\n mobno=%lld",s1.mobno );
	
	
	printf("\n enter details of second student");
	printf("\n enter roll no=");
	scanf("%d",&s2.rollno );
	printf("\n enter name");
	scanf("%s",s2.name );
	printf("\n enter marks ");
	scanf("%d",&s2.marks );
	printf("\n enter mobno");
	scanf("%lld",&s2.mobno);
	
	printf("\n second student details:");
	
	printf("\n rollno=%d \n name=%s \n marks=%d \n mobno=%lld",s2.rollno ,s2.name ,s2.marks ,s2.mobno);
	
	
	
	
//	printf("roll no=%d name=%s marks=%d mob no=%lld",s1.rollno,s1.name,s1.marks,s1.mobno);
}