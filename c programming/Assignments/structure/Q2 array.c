// Employee (id, name, salary) :

#include<stdio.h>
typedef struct Employee {

	int id;
	char name[20];
	double salary;

} Employee;

void main() {
	Employee srr[4];

	for(int i=0; i<3; i++) {
		printf("enter id , name and salary at %d index",i+1);
		scanf("%d",&srr[i].id );
		scanf("%s",srr[i].name );
		scanf("%lf",&srr[i].salary);
	}
	printf("\n id------name------salary");
	for(int i=0; i<3; i++) {
		printf("\n  %d         %s        %lf",srr[i].id, srr[i].name,srr[i].salary);

	}
}