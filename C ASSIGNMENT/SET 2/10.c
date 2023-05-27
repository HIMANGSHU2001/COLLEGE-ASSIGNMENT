#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int substring(char *str,char *sub)
{
	int i,j,p;
	for(i=0;str[i];i++)
	{
		p=-1;
		for(j=0;sub[j];j++)
		{
			if(str[i+j]==sub[j])
			{
				p=i;
			}
			else
			{
				p=-1;
				break;
			}
		}
		if(p!=-1)
		break;
	}
	return p;
}
int main()
{
	char *s1,*s2;
	int p=0,n1,n2;
	
	printf("Enter length of the first string: ");
	scanf("%d",&n1);
	s1=(char*)malloc(n1*sizeof(char));
	printf("\nEnter the first string: ");
	scanf("%s",s1);
	
	printf("\nEnter length of the second string: ");
	scanf("%d",&n2);
	s2=(char*)malloc(n2*sizeof(char));
	printf("Enter the second string: ");
	scanf("%s",s2);
	
	p=substring(s1,s2);	
	if(p==-1)
	printf("\nSecond string is not present in the first one!");
	else
	{
		printf("\nSecond string is present  in first string from  index no : - %d",p+1);
		
	}
	return 0;
}
