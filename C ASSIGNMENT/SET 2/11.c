#include<stdio.h>
#include<string.h>
# define size 100
void display(char *a[size],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%s",a[i]);
	}
}
void sort(char *c[size],int n)
{
	int i,j;
	char temp[100];

  	for( i=0; i<n-1; i++){
    for(j=0; j<n-i-1; j++){
    if(strcmp(*(c+j), *(c+j+1)) > 0){
        strcpy(temp, *(c+j));
        strcpy(*(c+j), *(c+j+1));
        strcpy(*(c+j+1), temp);			
		}
	}
}
}
int main()
{
	int n,i;
	char *country[size],temp[100][100];
	printf("Enter the number of countries: ");
	scanf("%d",&n);
	printf("\nEnter coutries: ");
	for(i=0;i<n;i++){
		printf("\nEnter country %d: ",i+1);
		scanf("%s",temp[i]);
		country[i]=temp[i];
	}
	sort(country,n);
	printf("\nCountry names in alphabetical order: ");
	display(country,n);
	return 0;
}
