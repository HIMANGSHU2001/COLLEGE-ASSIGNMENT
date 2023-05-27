#include<stdio.h>
int mat[100][100] , mat_t[100][100] , mul[100][100]; 
void input(int n)
{
  int i , j; 
  printf(" \nEnter the elements of the mattrix :\n");
  
  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      scanf("%d",&mat[i][j]);
    }
  }
}
void display(int temp_mat[][100], int n)
{
  int i ,j;
  for(i = 0 ; i < n ; i++){
      for(j = 0 ; j < n ; j++){
    printf(" %d ",temp_mat[i][j]);
    }
    printf("\n");
  }
}
void transpose(int temp_mat[][100] , int n){
  int i , j ;
  for(i = 0 ; i < n ; i++){
      for(j = 0 ; j < n ; j++){
      mat_t[i][j] = mat[j][i];
    }
  }
}
//Multiply
void multiply(int M1[][100] , int M2[][100] ,int n)
{
  int i , j , k;
  
  for(i = 0 ;i < n ; i++){
    
    for(j = 0 ; j < n ;j++){
      int temp = 0;
      for(k = 0 ; k < n ; k++){
        temp += (M1[i][k] * M2[k][j]);
      }
      mul[i][j] = temp ;
    }
  }
}
int check(int m1[][100] , int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (m1[i][j]==1 && i == j)
      {
        continue;
      }
      if(m1[i][j] != 0)
        return 0 ;
    }
  }
  return 1 ;
}
int main()
{
  int n ;
  printf("Enter the size of matrix :");
  scanf("%d",&n);
  input(n);
  printf("\nOriginal matrix :\n");
  display(mat , n);
  transpose(mat, n);
  printf("\nTranspose matrix :\n");
  display(mat_t, n);
  printf("\nAfter multiplying the matrixes:\n");
  multiply(mat, mat_t , n);
  display(mul, n);
  if (check(mul , n))
  {
    printf("Matrix is orthogonal.\n");
  }
  else
    printf("Matrix is not orthogonal.\n");
return 0;
  
}
