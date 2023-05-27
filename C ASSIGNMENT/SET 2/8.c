#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fibonacciNumber(int n)
{
	static int a = 0, b = 1, c;
	if(n>0)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
		fibonacciNumber(n-1);
	}
	printf("\n");
}
int hcf(int n, int n2)
{
	if(n2 != 0)
		return hcf(n, n%n2);
	else
		return n;
}
void swap(char* x, char* y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void Permutation(char* a, int l, int r)
{
	int i;
    if (l == r)
        printf("%s\n", a);
    else {
        for (i = l; i <= r; i++) {
            swap((a + l), (a + i));
            Permutation(a, l + 1, r);
            swap((a + l), (a + i)); // backtrack
        }
    }
	
}
 int sum_of_digit(int n)
 {
 	if(n != 0)
 	{
 		return (n % 10 + sum_of_digit(n/10));	
 	}
 	else
 	{
 		return 0;	
	}
 	
 }
 int decimal_to_binary(int n)
 {
 	if(n == 0)
 		return 0;
 	else
 		return(n%2 + 10 * decimal_to_binary(n/2));
 	
 }
 double Cos_series(double x,int n,double r)
{
	if(n>0)
	{
		r=1-((x*x*r)/(n*(n-1)));
		return Cos_series(x,n-2,r);
	}
	return r;
}

int main()
{
	int t = 1, ch;
	while(t)
	{
		printf("Enter your choice:\n");
		printf("Press 0 for exit....\n");
		printf("Press 1. for Fibbonacci numbers:\n");
		printf("Press 2. for GCD of two numbers: \n");
		printf("Press 3. for generate permutations of n numbers\n");
		printf("Press 4.for the sum of the digit of any number\n");
		printf("Press 5. for convert from decimal to binary representation\n");
		printf("Press 6.To Cos series up to n terms.\n");
		scanf("%d", &ch);
		switch(ch)
		{
			int n, n2, x, r = 1;
			char str[100];
			case 0:
				exit(1);
			case 1:
				printf("Enter a number: ");
				scanf("%d", &n);
				printf("%d %d", 0, 1);
				fibonacciNumber(n-2);
				break;
			case 2:
				printf("Enter second number:");
				scanf("%d", &n2);
				printf("G.C.D of %d and %d is %d \n", n, n2, hcf(n, n2));
				break;
			case 3:
				printf("Enter ");
				scanf("%s", str);
				int len = strlen(str);
				Permutation(str, 0, len-1);
				break;
			case 4:
				printf("Enter a number: ");
				scanf("%d", &n);
				int result = sum_of_digit(n);
				printf("Sum of digits in %d is %d\n", n, result);
				break;
			case 5:
				printf("Enter a number: ");
				scanf("%d", &n);
				int bin = decimal_to_binary(n);
				printf("The binary equivalent of %d is %d \n", n, bin);
				break;
			case 6:
				printf("Enter no of terms: ");
				scanf("%d",&n);
				printf("Enter value of x: ");
				scanf("%lf",&x);
				printf("Cos(x)= %.3lf\n", Cos_series(x, n, r ));
				break;
			default:
				printf("Please Enter valid choice");
				break;
				
				
				
				
		}
	}
	return 0;
	
	
}
