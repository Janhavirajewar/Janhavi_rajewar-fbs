#include<stdio.h>
#include<string.h>
typedef struct student
{
	int id;
	char name[20];
	int marks;
	long long int mobno;
}student;
void storeHardcoded(student*,int*);
void storestudent(student*,int);
void displaystudent(student*,int);
int	searchstudentBYRollNo(student*,int,int );
int updatestudent(student*, int);
void deletestudent(student*,int*);
void main()
{
	student stud[100];
	int exit;
	int count=0;
	storeHardcoded(stud,&count);
	
	do
	{
		int ch;
		printf("\nenter choice");
		printf("\n enter 1.Store  2.Display 3.Search  4.Update  5.Delete ");
		scanf("%d",&ch);
		if(ch==1)
		{
			//	printf("enter how many students you want to add : ");
			//scanf("%d",&count);
			storestudent(stud,count);
		
		}
		else if(ch==2)
		{
			displaystudent(stud,count);
			
		}
		else if(ch==3)
		{
				int id;
				printf("\n enter id you have to search");
				scanf("%d",&id);
				int i=searchstudentBYRollNo(stud,id,count);
				if(i!=-1)
				{
					printf(" \n name is %s  and marks is %d found at index %d",stud[i].name,stud[i].marks,i);
					
					printf("\n student is search sucessfully ");
				}
				else
				{
					printf("\n not found");
				}
		}
		else if(ch==4)
		{
			int i=updatestudent(stud,count);
			if(i!=-1)
			printf("\n name is %s , marks is %d , mobno is %lld",stud[i].name,stud[i].marks,stud[i].mobno);
		
		}
		else if(ch==5)
		{
			deletestudent(stud,&count);
			displaystudent(stud,count);
		}
	printf("enter value of exit to continue enter 1 ");
	scanf("%d",&exit);
}while(exit==1);
}
void storestudent(student*stud,int s)
{
	for(int i=0;i<s;i++)
	{
	
		printf("Enter id , name , marks ,mobno of %d student",i);
	
		scanf("%d",&stud[i].id);
		scanf("%s",stud[i].name);
		scanf("%d",&stud[i].marks);
		scanf("%lld",&stud[i].mobno);
		
	}
 }
void displaystudent(student*stud,int s)
{
	for(int i=0;i<s;i++)                
	{
		printf("\n Details of student %d",i+1);
		printf("\n id: %d",stud[i].id);
		printf("\n name: %s",stud[i].name);
		printf("\n marks: %d",stud[i].marks);
		printf("\n mobno: %lld",stud[i].mobno);
		
		printf("\n student is display sucessfully");
	}
}
void storeHardcoded(student* stud, int* count)
{
	*count = 3; 

	stud[0].id = 101;
	strcpy(stud[0].name, "Raj");
	stud[0].marks = 85;
	stud[0].mobno = 9876543210;

	stud[1].id = 102;
	strcpy(stud[1].name, "Simran");
	stud[1].marks = 92;
	stud[1].mobno = 9876543211;

	stud[2].id = 103;
	strcpy(stud[2].name, "Aman");
	stud[2].marks = 78;
	stud[2].mobno = 9876543212;

}
int	searchstudentBYRollNo(student*stud,int id,int s)
{
	for(int i=0;i<s;i++)
	{
		if(stud[i].id==id)
		return i;
	
	}
	return -1;
}

int updatestudent(student*stud,int s)
{
	int id;
	printf("\n enter the id you have to update");
	scanf("%d",&id);
	
	for(int i=0;i<s;i++)
	{
		if(stud[i].id==id)
		{
			printf("\n enter name , mark and mobno");
		scanf("%s", stud[i].name);
		scanf("%d", &stud[i].marks);
		scanf("%lld", &stud[i].mobno);
		printf("\nStudent updated successfully\n");
		
			return i;
		}
	}	
		printf("\n invalid id");
		return -1;
}
void deletestudent(student*stud,int*count)
{
	int id,f=0;
	printf("\n enter id you have to delete: ");
	scanf("%d",&id);
	for(int i=0;i<*count;i++)
	 {
        if (stud[i].id == id)  
        {
            for (int j = i; j<*count - 1; j++)
			 {
                stud[j] = stud[j + 1];
             }
            (*count)--;
           // f=1;
            printf("\nStudent with ID %d deleted successfully.\n", id);
          //  break; 
        }
    }	
}