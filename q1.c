//queue using array
#include<stdio.h>
#define MAX 10

int q[MAX];
int front,rear=-1;

void enqueue(int data)
{
 if(rear==MAX-1)
 {
  printf("\nQueue is full");
 }
 else if(front==-1 && rear==-1)
 {
  front=0;rear=0;
  q[rear]=data;
 }
 else{
 q[++rear]=data;
 printf("\nelement added");
 }
}

int dequeue()
{
 if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty"); 
 }
 else  
 {
  int temp=q[front];
  front++;
  
  return temp;
 }
}

void display()
{
  if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty"); 
 }
 else{
 for(int i=front;i<=rear;i++)
 printf("%d ",q[i]);
 }
}

int main(){
 int ch, data,d;
 while(ch!=4)
 {
  printf("\nMENU\n1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n\nEnter choice: "); 
  scanf("%d",&ch);
  
  switch(ch){
  case 1: 
         printf("\nEnter data: ");
         scanf("%d",&data);
         enqueue(data);
         break;
        
  case 2: 
         d=dequeue();
         printf("%d is deleted",d);
         break;
         
  case 3: 
         display();
         break;
         
  case 4: 
         return 0;break;
         
  default: 
          printf("\nInvalid choice");
          
 }
 }
}                
