#include<stdio.h>
void power(float n , int p){
  int i ;
  float res = 1;
  if(n==0 && p<=0){
    printf("Undifind\n");
    return ;
  }
     if(n==0 && p<=0){
    printf("0\n");
    return ;
  }
  while(p!=0){
  	res = res * n ;
  	--p;
  }
       
  printf("%f",res);
  return ;
}

int main()
{
  int p ;
  float n ;
  printf("Enter the number and its power : \n");
  scanf("%f %d",&n,&p);
  power(n,p);
  return 0 ;
}
