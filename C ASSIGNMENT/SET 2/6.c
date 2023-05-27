#include<stdio.h>
void read_data(int a[10][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element #a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int a[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void sort(int a[10][10],int r,int c)
{
	int i,j,k,l,t;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			l=j+1;
			for(k=i;k<r;k++)
			{
				while(l<c)
				{
					if(a[i][j]>a[k][l])
					{
						t=a[k][l];
						a[k][l]=a[i][j];
						a[i][j]=t;
					}
					l++;
				}
				l=0;
			}
		}
	}
}
void merge_array(int a[10][10],int b[10][10],int m[10][10],int n)
{
	int i,j,k,l;
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	m[i][j]=a[i][j];
	
	k=i;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		m[k][j]=b[i][j];
		k++;
	}
}
int main()
{
	int i,j,k,n;
	int a[10][10],b[10][10],m[10][10];
	
	printf("Enter order for 1st and 2nd 2-D array: ");
	scanf("%d",&n);
	printf("\nEnter Elements of 1st 2-D array: \n");
	read_data(a,n);
	printf("\nThe 1st 2-D array is:\n");
	display(a,n,n);
	
	printf("\nEnter Elements of 2nd 2-D array: \n");
	read_data(b,n);
	printf("\nThe 2nd 2-D array is:\n");
	display(b,n,n);
	
	sort(a,n,n);
	printf("\nAfter sorting, The 1st 2-D array is:\n");
	display(a,n,n);

	sort(b,n,n);
	printf("\nAfter sorting, The 2nd 2-D array is:\n");
	display(b,n,n);
	
	merge_array(a,b,m,n);
	printf("\nAfter merging, The merge array is:\n");
	display(m,2*n,n);
	sort(m,2*n,n);
	printf("\nAfter sorting, The merge array is:\n");
	display(m,2*n,n);

	return 0;

}
