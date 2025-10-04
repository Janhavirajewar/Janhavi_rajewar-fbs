#include <stdio.h>

typedef struct student {
	int rollno;
	int marks;
	char name[20];
} student;

void store(student*, int);
void display(student*, int);
int search(student*, int);  // ✅ Function prototype added

void main() {
	student srr[2];

	printf("Enter student details:\n");
	store(srr, 2);

	printf("\nStudent details:\n");
	display(srr, 2);

	int i = search(srr, 2);
	if (i != -1) {
		printf("\n%s found at %d index\n", srr[i].name, i);
	} else {
		printf("\nStudent not found.");
	}
	
}

void store(student* srr, int s) {
	for (int i = 0; i < s; i++) {
		printf("Enter roll no, marks, and name for student %d:\n", i + 1);
		scanf("%d", &srr[i].rollno);
		scanf("%d", &srr[i].marks);
		scanf("%s", srr[i].name);
	}
}

void display(student* s, int s_count) {
	for (int i = 0; i < s_count; i++) {
		printf("\nRoll no: %d", s[i].rollno);
		printf("\nMarks: %d", s[i].marks);
		printf("\nName: %s\n", s[i].name);
	}
}

int search(student* srr, int s) {
	int rollno;
	printf("\nEnter roll no you have to search: ");
	scanf("%d", &rollno);
	for (int i = 0; i < s; i++) {
		if (srr[i].rollno == rollno) {
			return i;
		}
	}
	return -1;
}
