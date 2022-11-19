#include<stdio.h>
#define MAX 20
int stack[MAX], top=-1;
int auxstack[MAX], auxtop=-1;

int isEmpty(int top){
if(top==-1)
return 1;
else
return 0;
}

void push(int data)
{
 if(top==MAX-1)
 printf("\nStack Overrflow");
 else
 {
   stack[++top]=data;
   if(isEmpty(auxtop))
   {
     auxstack[++auxtop]=data;
   }
   else
   {
    if(data<=auxstack[auxtop]){
     auxstack[++auxtop]=data;
     }
    }
   }
  }

void pop()
{
 int del;
 if(top==-1)
 {
  printf("\nStack empty");
 }
 else
 {
   del=stack[top--];
   if(del==auxstack[auxtop])
   auxtop--;
   printf("deleted: %d",del);
  }
 }  
      
void display()
{
 if(top==-1)
 printf("\nStack empty");  
 else
 {
  printf("\n");
  for(int i=0;i<=top;i++)
  {
   printf("%d", stack[i]);
  }
 }
}

void displaymin()
{
  if(auxtop==-1)
  printf("\nStack empty");
  else
  printf("\nminimum element : %d", auxstack[auxtop]);
 }
 
 
 int main()
 {
   int ch,element;
   do{
    printf("\nmenu");
    printf("\n1.push\n2.pop\n3.display stack\n4.display minimum\n5.exit\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
      case 1:
               printf("\nEnter element to push: ");    
               scanf("%d",&element);
               push(element);
               break;
               
      case 2: pop();
              break;
      
      case 3: display();
              break;
              
      case 4: displaymin();
              break;
              
      case 5: break;
      
      default: printf("\ninvalid entry");
               break;
     }
    }while(ch<5);
    return 0;
 } 
            
