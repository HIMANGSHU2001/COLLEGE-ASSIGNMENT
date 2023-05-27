//MERGE ARRAY
#include<stdio.h>
int main()
{
	int n, m, i, j, k, p;
	printf("Enter the size of 1st array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter 1st array's element:\n ");
	for(i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the size of second array:\n ");
	scanf("%d", &m);
	int b[m];
	printf("Enter 2nd array elements:\n ");
	for(j = 0; j<m; j++)
	{
		scanf("%d", &b[j]);
	}
	int res[m+n];
	printf("Merge array: ");
	i = 0, j = 0, k = 0;
	while(i<n && j<m)
	{
		if(a[i] < b[j])
		
			res[k++] = a[i++];
		else
			res[k++] = b[j++];
		
			
	}
	while(i<n)
		res[k++] = a[i++];
	while(j<m)
		res[k++] = b[j++];
	for(p = 0; p<n+m; p++)
	{
		printf("%3d", res[p]);
	}
	return 0;
	
	
}
