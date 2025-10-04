#include <stdio.h>

typedef struct Admin {
    int id;
    char name[20];
    double salary;
    double target;
    double commission;
    double total;
} Admin;

int main() {
    Admin srr[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter ID, Name, Target, and Salary for SalesManager %d:\n", i + 1);
        scanf("%d", &srr[i].id);
        scanf("%s", srr[i].name);
        scanf("%lf", &srr[i].target);
        scanf("%lf", &srr[i].salary);
    }

    printf("\n-----------------------------------------------------------------------------------");
    printf("\nID   Name       Salary     Target     Commission  Total");
    printf("\n-----------------------------------------------------------------------------------");

   
    for (int i = 0; i < 3; i++) {

        if (srr[i].target > 10000) {
            srr[i].commission = srr[i].salary * 0.20;
        } else if (srr[i].target > 5000) {
            srr[i].commission = srr[i].salary * 0.15;
        } else {
            srr[i].commission = srr[i].salary * 0.10;
        }

       
        if (srr[i].target > 10000) {
            srr[i].commission = srr[i].target * 0.08;
        } else if (srr[i].target > 5000) {
            srr[i].commission = srr[i].target * 0.05;
        } else {
            srr[i].commission = srr[i].target * 0.03;
        }

        
        srr[i].total = srr[i].salary + srr[i].commission;

        printf("\n%-4d %-10s %-10.2lf %-10.2lf %-10.2lf %-11.2lf ",
               srr[i].id, srr[i].name, srr[i].salary, srr[i].target,
               srr[i].commission, srr[i].total);
    }

    printf("\n-----------------------------------------------------------------------------------\n");

}