#include<stdio.h>

int find_Max(int arr[],int pos , int n){
  
  int i , j , res ;
  for(i = 0 ; i< pos ; i++){

    for(j = i+1 ; j < n ; j++){
      
      if(arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;
      }
    }
  }
  res = arr[pos-1] ;
  return res ;
}
int main()
{
  int n ;
  printf("Enter the Number of elements in the array : ");
  scanf("%d",&n);
  if(n < 3){
      printf("Insufficient data ");
  }
  else
  {
    int arr[n];
    int i ,ch ,pos, t = 1;
    for(i = 0;i < n ; i++){
    	printf("Enter the %d no of element: \n", i+1);
      scanf("%d",&arr[i]);
    }
    while(t)
    {
    	printf("\nPress 1 for 5th minimum element\n");
    	printf("Press 2 for 3rd maximum element.\n");
    	printf("Press 3 for middle element.\n");
    	printf("Press any other key to exit.\n");
    	scanf("%d",&ch);
    	switch (ch)
    	{
    		case 1:
      			pos = 5;
     			printf("\n5th minimum number is : %d\n",find_Max(arr , pos , n));
      			break;
    		case 2 :
      			pos = n-2;
      			printf("3rd maximum number is : %d\n",find_Max(arr , pos , n));
      			break;
    		case 3 :
     			pos = n/2;
      			printf("middle element of the array is : %d\n",find_Max(arr , pos , n));
      			break;
    		default:
      			printf("\nChoose one of the above  ");
      			break;
    
    	}
  	}
 }
	
    
}
