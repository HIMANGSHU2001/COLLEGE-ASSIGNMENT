#include<stdio.h>
#include<string.h>
int strLen(const char *s)
{
	int length = 0, i;
	for(i=0; s[i]!='\0'; i++)
    {
        length++; //Counting the length.
    }
    
    printf("\nLength of input string: %d\n",length);
	
}
char *strCpy(char *s1)
{
	char *p = s1, s2[1000], i;
	for(i =0; s1[i] != '\0'; ++i)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	printf("String s1: %s\n", s1);
	printf("String s2: %s\n", s2);
}
char *strCat(char *s1, char *s2)
{
	
	int i = 0, j = 0;
	while(s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	printf("\n Concatinated String is %s\n", s1);
}
void *strRev(char *str)
{
	int temp, i, length = strlen(str) -1 ;
	for( i = 0; i<strlen(str)/2; i++)
	{
		temp = str[i];
		str[i] = str[length];
		str[length--] = temp;
	}
	printf("Reverse string : %s\n", str);
}
int  strCmp(char *s1, char *s2)
{
	int flag = 0, i = 0;
	while(s1[i]!= '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
		i++;
		
	}
	if(flag == 0)
		return 0;
	else
		return 1;
	
}
int main()
{
	char str[1000];
	int t = 1, ch;
	printf("Enter a string: ");
	gets(str);
	
	while(t)
	{
		printf("Please enter your choice:\n ");
		printf("Press 1 for strlen()\n");
		printf("Press 2 for strcpy()\n");
		printf("Press 3 for strcat()\n");
		printf("Press 4 for strrev()\n");
		printf("Press 5 for strcmp()\n");
		scanf("%d", &ch);
		char str2[1000], str3[1000];
		switch(ch)
		{
			
			case 1:
				strLen(str);
				break;
			case 2:
				strCpy(str);
				break;
			case 3:
				printf("Enter Second string: ");
                scanf(" %s",str2);
				strCat(str, str2);
				break;
			case 4:
				strRev(str);
				break;
			case 5:
				printf("Enter Second string: ");
                scanf("%s",str3);
                int c = strCmp(str, str3);
                if( c == 0)
                	printf("String are Same\n");
                else
                	printf("String are not Same");
            	break;
		}
	}
	return 0;
	
}
