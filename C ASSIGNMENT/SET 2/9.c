#include<stdio.h>
void convert(int n,int b)
{
	int i,j,t;
	char num[100];
	while(n!=0)
	{
		t=n%b;
		if(t<10)
		{
			num[i]=t+48;
			i++;
		}
		else
		{
			num[i]=t+55;
			i++;
		}
		n=n/b;
		
	}
	printf("\nIn base %d the number is: ",b);

	for(j=i-1;j>=0;j--)
	{
		printf("%c",num[j]);
		
	}
}
int main()
{
	int b,n,res;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	printf("\nEnter the base: ");
	scanf("%d",&b);
	if(b>0 && b<=16)
	{
		convert(n,b);
	}
	else
	printf("\nBase should be less than 16!");
	return 0;
}
