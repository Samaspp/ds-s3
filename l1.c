//stack using linkedlist
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
int data;
struct node* next;

};
struct node* top=NULL;//whats wrong

void push(int d)
{
 struct node* newn= (struct node*)malloc(sizeof(struct node));
 newn->data=d;
 if( top==NULL)
 {
  newn->next=NULL;//brackets to alter precedence order?
 }
 else{
 newn->next=top;
 
 }
 top=newn;
}

int pop(){
 if(top==NULL)
 printf("\nStack is empty"); 
 else
 {
  struct node *temp=top;
  int tempd=top->data;
  top=top->next;
  free(temp);
  return tempd;
 }
}

void display(){
if(top==NULL)
{
 printf("\nStack underflow");}
 else{
 printf("\nThe stack is ");
 struct node *temp=top;
 while(temp->next!=NULL){
 printf("%d -> ",temp->data);
 temp=temp->next;
 } 
 printf("%d -> NULL\n",temp->data);
}
}


int main(){
 int ch,data;
 while(ch!=4){
 printf("\nMENU\n1. push\n2. pop\n3. display\n4. exit\nEnter choice: ");
 scanf("%d",&ch);
 switch(ch){
  
 case 1: {
          printf("\nEnter value to be pushed: ");  
          scanf("%d",&data);
          push(data);
          break;
         }
         
 case 2: {
          int d;
          d=pop();
          printf("%d is popped",d);
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
 
  
   
 


