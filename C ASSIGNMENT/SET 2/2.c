#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int partition(int arr[] , int n)
{
     srand(time(NULL));
     int r = rand() % n ;
     int x = arr[r];
     return x ;
}
void arrange(int arr[] , int n , int x )
{
    int less[n] , great[n] , c1 = 0, c2 = 0, i, j, k;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < x)
            less[c1++] = arr[i];
        else
            great[c2++] = arr[i];
    }
    printf("X = %d \n",x);
    printf("Array less than x :\n");
    for (j = 0; j < c1; j++)
        printf("%d ",less[j]);
    printf("\nArray greater than x :\n");
    for (k = 0; k < c2; k++)
        printf("%d ",great[k]);
}
int main()
{ 
    int n ,x ;
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    int arr[n], i;
    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    x = partition(arr , n);
    arrange(arr , n , x);

    return 0 ; 
}
