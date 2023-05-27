#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<string.h>
struct bank
{
	int Acc_No;
	char first_name[20];
	int balance;
	char last_name[20];
	
} b[150];
void print(int A,char* N,char* M, int B)
{
	printf("Account Number:%d\n", A);
	printf("Customer First_Name:%c\n", *N);
	printf("Customer Last_Name:%c\n", *M);
	printf("Account Balance:%d\n", B);
	
}
void deposit_withdrawal(int accnum, int amount, int code)
{
	int i;
	for (i = 0; i <= 1000; i++)
		if (b[i].Acc_No == accnum)
			break;
	if (!code)
	{
		if (b[i].balance - amount < 1000)
		{
			printf("\nThe balance is insufficient for the specified withdrawal");
			return;
		}
		else
		{
			b[i].balance -= amount;
			printf("\nYour new account balance is : %d", b[i].balance);
		}
	}
	else
	{
		b[i].balance += amount;
		printf("\nYour new account balance is : %d", b[i].balance);
	}

}
int main()
{
	int n, i, t=1;
	printf("Enter the no of customers:\n");
	scanf("%d", &n);
	for(i = 0; i<n; i++)
	{
		printf("Enter Account number\n");
		scanf("%d", &b[i].Acc_No);
		printf("Enter first name:\n");
	//	scanf("%s", b[i].name);
		scanf("%s", b[i].first_name);
		//gets(b[i].name);
		printf("Enter last name:\n");
		scanf("%s", b[i].last_name);
		
		b[i].balance = 1000;
		print(b[i].Acc_No, b[i].first_name,b[i].last_name, b[i].balance);
		
	}
	int accnum, amount, code;
	while(t)
	{
		printf("\nEnter your account number : ");
		scanf("%d", &accnum);
		if(accnum == b[i].Acc_No)
		{
			printf("\nEnter 1 for deposit and 0 for withdrawal : ");
			scanf("%d", &code);
			if (code)
			{
				printf("\nEnter amount to be deposit : ");
				scanf("%d", &amount);
			}
			else
			{
				printf("\nEnter amount to withdraw : ");
				scanf("%d", &amount);
			}
			deposit_withdrawal(accnum, amount, code);
		}
		else
		{
			printf("Invalid Account Number");
			break;
		}
	}
	return 0;
}
