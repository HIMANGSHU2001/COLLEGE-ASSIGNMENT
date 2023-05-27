#include<stdio.h>
int main(){
	int hundred = 0, fifty = 0, twenty = 0, ten = 0, amount;
	printf("Enter the amount: ");
	scanf("%d", &amount);
	while(amount > 0)
	{
		if((amount - 100) >= 0)
		{
			amount = amount - 100;
			hundred++;
		}
		else if((amount - 50 >= 0))
		{
			amount = amount - 50;
			fifty++;
		}
		else if((amount - 20 >= 0))
		{
			amount = amount - 20;
			twenty++;
		}
		else if((amount - 10 >= 0))
		{
			amount = amount - 10;
			ten++;
		}
		else{
			amount = 0;
		}
		printf("%d", amount);
	}
	return 0;
}
