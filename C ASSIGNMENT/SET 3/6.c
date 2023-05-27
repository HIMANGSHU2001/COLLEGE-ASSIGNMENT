#include<stdio.h>
struct time{
	int hours,min,sec;
};
struct time add_time(struct time ,struct time);
int main(){
	struct time time1,time2,time3;
	printf("enter time \nhh:mm:ss\n");
	scanf("%d:%d:%d",&time1.hours,&time1.min,&time1.sec);
	printf("\n\n enter another time \nhh:mm:ss\n");
	scanf("%d:%d:%d",&time2.hours,&time2.min,&time2.sec);
	time3=add_time(time1,time2);
	printf("\n\n\n under the main \n\nthe new time is \nhh:mm:ss\n%2d:%2d:%2d",time3.hours,time3.min,time3.sec);
	
	return 0;
}
struct time add_time(struct time time1,struct time time2){
	struct time time3;
	time3.hours=time1.hours+time2.hours;
	time3.min=time1.min+time2.min;
	time3.sec=time1.sec+time2.sec;
	
	
	time3.min+=(time3.sec/60);
	time3.sec%=60;
	time3.hours+=(time3.min/60);
	time3.hours%=24;
	time3.min%=60;
//	printf("\n\n\n the new time is \nhh:mm:ss\n%2d:%2d:%2d",time3.hours,time3.min,time3.sec);
	return time3;
	
}
