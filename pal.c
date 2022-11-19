#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 20


int pop(char str[MAX],int len)
{
int top;
  char del;top=len-1;
 if(top==-1)
 {
  printf("\nStack empty");return 0;
 }
 else
 {
   del=str[top--];
   return del;
  }
 }  

















void main()
{
 char str[MAX],rev[MAX];
 int len;int flag=0;
 printf("nEnter the string:");
 scanf("%s",str); 
 len=strlen(str);
 //printf("%d",len);
 for(int i=0;i<len/2;i++)
 {
  rev[i]=pop(str,len);
 }
 for(int i=0;i<len/2;i++)
 {
  if (strcmp(str[i],rev[i])!=0)
   flag++;
  
 }
 if(!flag)
  printf("\nString is palindrome");
  else
  printf("\nString is not a palindrome");
  
  }
 
 
