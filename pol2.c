#include <stdio.h>
#include <math.h>
void main()
{
  int n,x,sum=0;
  int arr[10];
  printf("Enter degree of polynomial: ");
  scanf("%d",&n);
  /*for(int i=3;i>=0;i--)
  {
    scanf("%d",&n);
  }*/
  printf("\nEnter coefficient of polynomials: ");
  for(int i=3;i>=0;i--)
  {
   scanf("%d",&arr[i]);
  }
  printf("\nEnter value of x: ");
  scanf("%d",&x);
  for(int i=3;i>=0;i--)
  {
   sum=sum+arr[i]*pow(x,i);
  }
  printf("\nValue of polynomial: %d",sum);
}    
