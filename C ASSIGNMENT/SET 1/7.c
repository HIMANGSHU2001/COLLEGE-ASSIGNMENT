#include<stdio.h>
int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int a[n], i;
	for(i = 1; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	int ans = a[0];
	int lcm = a[0];
	for(i = 0; i<n; i++)
	{
		ans = gcd(ans, a[i]);
		lcm = (lcm*a[i])/(gcd(lcm, a[i]));
	}
	printf("GCD of = %d", ans);
//	int lcm = a[0];
/*	for(i = 1; i<n; i++)
	{
		lcm = (lcm*a[i])/(gcd(lcm, a[i]));
	} */
	printf("LCM = %d", lcm);
	return 0;
}
