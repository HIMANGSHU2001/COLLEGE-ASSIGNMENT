#include<stdio.h>
int main()
{
	int n, i, j, flag = 0, sum1 = 0, sum2 = 0, k;
	printf("\nEnter the value of n:");
	scanf("%d", &n);
	if(n == 1)
		printf("%d", n);
	else{
		for(i = 2; i<= n; i++)
	{
		sum1 = 0;
		sum2 = 0;
		for(j = 1; j<i; j++)
		{
			sum1 += j;
		}
		for(k = i+1; k<= n; k++)
		{
			sum2 += k;
		}
		if(sum1 == sum2)
		{
			printf("\n The value of x is: %d", i);
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("\nx is not found");
	}
	}
	
}
