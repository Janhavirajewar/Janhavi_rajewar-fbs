#include<stdio.h>

double deposite(double);
double withdraw(double);
void main()
{
	double balance;
	printf("Enter bank balance");
	scanf("%lf",&balance);
	int exit;
	
	do
	{		
	int ch;
	printf("Enter choice :");
	scanf("%d",&ch);
	if(ch==1)
	{
		double d=deposite(balance);
		{
			 printf("\n deposite is %lf",d);
		}
	}
		
	else if(ch==2)
	{
		double d=withdraw(balance);
		{
			printf("\n withdraw balance is %lf",d);
		}
	}
	
	else
    {
        printf("\n Invalid choice!");
    }
    printf("\n enter exit:");
	scanf("%d",&exit);
}while(exit==1);
}

double deposite(double balance)
{
	double amount;
	printf("Enter amount to deposit: ");
    scanf("%lf", &amount);
    
    balance=balance+amount;
    return balance;
}
double withdraw(double balance)
{
	
	double amount;
	printf("\n Enter amount to withdraw: ");
    scanf("%lf", &amount);
    
	 if (amount > 0 && amount >= 3000)
	{
		balance=balance-amount;
	}	
	else
	{
		printf("\n balance is not sufficient to withdraw :");
	}
	return balance;
	
}