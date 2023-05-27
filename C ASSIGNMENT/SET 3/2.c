#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct time
{
	int hr;
	int min;
	int sec;
	
} Time;
void print_Time(Time t)
{
	printf("%d:%d:%d", t.hr, t.min, t.sec);
}
Time add_Time(Time t1, Time t2)
{
	Time t;
	t.sec = t1.sec + t2.sec;
    int addMin = 0;
    if (t.sec >= 60) {
        t.sec = t.sec - 60;
        addMin = 1;
 
    }
    t.min = t1.min + t2.min + addMin;
    int addHr = 0;
    if (t.min >= 60) {
        t.min = t.min - 60;
        addHr = 1;
    }
    t.hr = t1.hr + t2.hr + addHr;
 
    return t;
}
int main()
{
	Time t1, t2, result;
	printf("Enter 1st time\n");
	scanf("%d:%d:%d", &t1.hr, &t1.min, &t1.sec);
	printf("Enter 2nd time:\n");
	scanf("%d:%d:%d", &t2.hr, &t2.min, &t2.sec);
	result = add_Time(t1, t2);
	printf("Addition = ")
	print_Time(result);
	return 0;	
}
