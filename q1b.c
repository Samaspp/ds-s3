//queue as linkedlist not complete
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
int data;
struct node* next;
};

struct node* front=NULL;
struct node* rear=NULL;

void enqueue(int d)
{
 struct node* newn= (struct node*)malloc(sizeof(struct node));
 newn->data=d;
 if(rear==NULL)
 {
  newn->next=NULL;
 }
   
 else{
 rear->next=newn;}
 rear=newn;
}

int dequeue()
{
 int tempd;
 if(front==NULL)
 {
  printf("\nQueue is empty");
 }
 else{
  struct node *temp=front;
  tempd=front->data;
  front=front->next;
  free(temp);
  return tempd;
  }
}

void display()
{
 if(front==NULL)
 {
  printf("\nQueue is empty");
 }else{
 struct node *temp=front;
 while(temp->next!=NULL){
 printf("%d -> ",temp->data);
 temp=temp->next;
 }
 printf("%d ->NULL",rear->data);
}}

int main(){
 int ch,data;
 while(ch!=4){
 printf("\nMENU\n1. enqueue\n2. dequeue\n3. display\n4. exit\nEnter choice: ");
 scanf("%d",&ch);
 switch(ch){
  
 case 1: {
          printf("\nEnter value to be added: ");  
          scanf("%d",&data);
          enqueue(data);
          break;
         }
         
 case 2: {
          int d;
          d=dequeue();
          printf("%d is deleted",d);
          break; 
         }
  
 case 3: display();
         break;
         
 case 4: return 0;
         break;
         
 default: printf("\nInvalid choice.");
          break;}
 }return 0;
}          
 
