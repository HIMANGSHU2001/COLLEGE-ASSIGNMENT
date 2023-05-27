#include<stdio.h>

/* Declaration of structure */
struct student
{
 char name[30];
 int roll,  sub1, sub2, sub3, sub4, sub5;
 float marks;
 float avg;
};

int main()
{
/* Declaration of array of structure */
 struct student s[20], temp;
 int i,j,n;
 
 printf("Enter n:\n");
 scanf("%d",&n);
 for(i=0;i< n;i++)
 {
  printf("Enter name, roll and marks of student:\n");
  scanf("%s%d",s[i].name, &s[i].roll);
  printf("Enter the marks:\n"); 
  scanf("%d%d%d%d%d", &s[i].sub1, &s[i].sub2, &s[i].sub3, &s[i].sub4, &s[i].sub5);
  s[i].marks = s[i].sub1 + s[i].sub2 + s[i].sub3 + s[i].sub4 + s[i].sub5;
  s[i].avg = s[i].marks/5;
 }
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(s[i].marks>s[j].marks)
   {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
   }
  }
 }
 printf("Sorted records are:\n");
 for(i=0;i< n;i++)
 {
  printf("Name: %s\n", s[i].name);
  printf("Roll: %d\n", s[i].roll);
  printf("Marks: %0.2f\n", s[i].marks);
  printf("AVERAGE:%0.2f\n", s[i].avg);
 }
 return 0;
}
