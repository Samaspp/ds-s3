//sparsity
#include<stdio.h>
struct matrix {
int row;
int col;
int value;
};

void main()
{
 int n,m,i,j;
 int a[20][20];
 struct matrix s[100];
 printf("\nEnter number of rows: ");
 scanf("%d",&n);
 printf("\nEnter number of columns: ");
 scanf("%d",&m);
 printf("\nEnter matrix: ");
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 s[0].row=n;
 s[0].col=m;
 
   
 int c=1;
 int count=0;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   if(a[i][j]!=0){
   s[c].row=i;
   s[c].col=j;
   s[c].value=a[i][j];
   c++;
   count++;
  }
  }
 }
 int num=0;
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   if(a[i][j]==0){
   num++;
   }
  }
 }
 s[0].value=count;
 printf("\nSparse matrix: \n");
 for (int i=0;i<=count;i++){
  printf("%2d%2d%2d\n",s[i].row,s[i].col,s[i].value);
 }
 float sparsity,prod;
 prod=s[0].row*s[0].col;
 sparsity=prod-s[0].value;
 sparsity=sparsity/prod;
 printf("\nSparsity is: %f",sparsity);
} 
