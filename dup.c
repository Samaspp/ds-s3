#include<stdio.h>
#include<malloc.h>
struct node{
int data;
struct node* next;
};

struct node* head=NULL;
struct node* rear=NULL;

void add(int d){
struct node* newn= (struct node*)malloc(sizeof(struct node));
newn->data=d;
if(head==NULL){
 newn->next=NULL;
 head=newn;
 rear=newn;
 }
else{
 rear->next=newn;
 rear=newn;
 }
}

void dup(){
struct node* temp=head;


while(temp->next!=NULL){

 int d=temp->data;
 struct node* prev=temp;
 struct node* check=temp->next;
 	
 	printf("\nhi1");
	// printf("%d %d",prev->data,check->data);
 	while(check->next!=NULL)
		 {
		  int flag=0;
		  
		  if (check->data==d){
		  //int p=check->data;
		  printf("\nhi2");
		  prev->next=check->next;
		  
		 // free(check);
		  printf("\n%d is deleted",d);
		  flag++;
		 }
		 
		 if(flag==0)prev=prev->next;
		 
	  	 check=check->next;
  	 
	}
	printf("\n%d---" , rear->data);
	if(rear->data==d){
		 //delete rear 
		 printf("\nhello");
		 prev->next=NULL;
		 free(rear);
		 printf("\n%d is deleted",d);
		 rear=prev;
		 rear->next=NULL;
	}
	
	if(temp->next!=NULL)
		temp=temp->next;
	
	}
}


void display(){
 struct node* temp=head;
 if(head==NULL){printf("\nList is empty.");}
 else while(temp->next!=NULL){
 printf("%d -> ",temp->data);
 temp=temp->next;
 }
 printf("%d",rear->data);
 //rear->next=NULL;
}

int main()
{
 int ch,data;
 while(ch!=4){
 printf("\n\nMENU\n1)Add element\n2)Delete duplicate elements\n3)Display list\n4)Exit\nEnter choice: ");
 scanf("%d",&ch);

 switch(ch){
 case 1: 
         printf("\nEnter element to be added: ");
         scanf("%d",&data);
         add(data);
         break;
 
 case 2: 
         dup();
         break;

 case 3:  
         display();
         break;

 case 4: 
         return 0;
         break;

 default:
         printf("\nInvalid entry.");
         break;
}}
return 0;
}

 


 
 
 
