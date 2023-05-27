#include<stdio.h>
struct date{
	int day,manth,year;
};
int main(void){
	struct date date1,date2;
	printf("enter date dd mm yyyy\n\n");
	scanf("%d%d%d",&date1.day,&date1.manth,&date1.year);
	printf("\n\n\nsecond enter date dd mm yyyy\n\n");
	scanf("%d%d%d",&date2.day,&date2.manth,&date2.year);
	if(date1.day==date2.day){
		if(date1.manth==date2.manth){
			if(date1.year==date2.year){
				printf("\n\n date is Equal ");
				
			}
			else{
				printf("\n\n Unequal  3 is");
				
			}
		}
		else{
				printf("\n\n Unequal 2is");
				
			}
	}else{
				printf("\n\n Unequal 1is ");
				
			}
	
	return 0;
}
