#include<stdio.h>
#include<string.h>
void count(char *s,int *a)
{
	int article=0,upper =0,i,j=0;

	for(i=0;s[i];i++)
	{
		if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i] == '-'))
		++j;
		else
		j=0;
		
		if(j==1)
		{		
			if(((s[i]=='a' || s[i]=='A') && (s[i+1]==' ')) ||
			 	((s[i]=='a' || s[i]=='A') && (s[i+1]=='n') && (s[i+2]==' ')) ||
			 	((s[i]=='t' || s[i]=='T') && (s[i+1]=='h') && (s[i+2]=='e') && (s[i+3]==' ')))
			 	++article;
	
			if(s[i] >='A' && s[i]<='Z')
			++upper;
		}	
	}
	a[0]=article;
	a[1]=upper;
}
int main()
{
	char s[500];
	int a[2];
	printf("Enter a multi-sentece text (press '#' to end input): ");
	scanf("%[^#]s",s);
	count(s,a);
	printf("\nNo of articles= %d",a[0]);
	printf("\nNo of uppercase letters= %d",a[1]);

	return 0;
}
