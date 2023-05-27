#include<stdio.h>
#include<math.h>
int main()
{
	float c, f;
	int ch,t=1;
	while(t)
	{
		printf("\n Press 1 to convert centigrade to fahrenheit.");
		printf("\n Press 2 to convert fahrenheit to centigrade.");
		printf("\n Press any other key to exit.");
		printf("\n Enter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter the temperature in centigrade: ");
				scanf("%f", &c);
				f = (9*c/5) + 32;
				printf("\n The temperature in fahrenheit is %f\n", f);
				break;
			case 2:
				printf("\n Enter the temperature in fahrenhit: ");
				scanf("%f", &f);
				c = (f-32) *5/9;
				printf("The temperature in centigrade %f", c);
				break;
			defalut:
				printf("Please Enter right choice.");
				exit(1);
				
		}
		scanf("%d",&t);
	}
	return 0;
}
