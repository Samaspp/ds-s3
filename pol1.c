#include <stdio.h>
#include <math.h>
void main()
{
  int n,m,k;
  int a[10],b[10],c[10];
  printf("\nEnter degree of polynomial 1: ");
  scanf("%d", &n);
  printf("\nEnter degree of polynomial 2: ");
  scanf("%d", &m);
  if(n>m) k=n;
  else k=m;
  printf("\nEnter coefficients of polynomial 1: ");
  for(int i=n;i>=0;i--)
  {
   scanf("%d",&a[i]);
  }
  printf("\nEnter coefficients of polynomial 2: ");
  for(int i=m;i>=0;i--)
  {
   scanf("%d",&b[i]);
  }
  
  for(int i=k;i>=0;i--)
  {
   c[i]=a[i]+b[i];
  }
  printf("\nThe resultant polynomial is: ");
 
  for(int i=k;i>0;i--)
  {
   printf("%dx^%d+",c[i],i);
  }
  printf("%d",c[0]);
 
}
