#include<stdio.h>
#define MAX_SIZE 20
int stack[MAX_SIZE],top1=-1,top2=MAX_SIZE;
void pop(int stackno){
	if (stackno==1){
        if (top1==-1){
            printf("\nStack 1 empty");
            
      	}
        printf("The popped element is %d",stack[top1--]);
    }
    else if(stackno==2){
        if (top2==MAX_SIZE){
            printf("\nStack 2 empty");
            
        }
        printf("The popped element is %d\n",stack[top2++]);
    }
}
void display(int stackno){
	if (stackno==1){
        if (top1==-1){
            printf("\nStack 1 empty");
        }
        else{
        	printf("\nElements of stack 1:\n");
        	for(int i=top1;i>=0;i--){
          	printf("%3d \n",stack[i]);}
        }
    }
   else if(stackno==2){
        if (top2==MAX_SIZE)
        {
            printf("\nStack 2 empty");
        }
        printf("\nElements of stack 2:\n");
        for(int i=top2;i<=MAX_SIZE-1;i++)
            printf("%3d\n", stack[i]);
    }
}
void push(int stackno,int element){
	if (stackno==1){
		if (top1==top2 - 1){
      		printf("\nStack 1 full");
   		}
    	else{
      		stack[++top1]=element;
   		}
	}
	else if(stackno==2){
		if (top2==top1+1){
			printf("\nStack 2 full");
		}
		else{
			stack[--top2]=element;
		}
	}
}

int main()
{
    int stackno, choice, element, popped;
    printf("Enter stack number (1 / 2): ");
    scanf("%d", &stackno);
    do
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Modify stack number");
        printf("\n5.Exit\n");        
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to be inserted: ");
            scanf("%d",&element);
            push(stackno,element);
            break;
        case 2:
            pop(stackno);
            break;
        case 3:
            display(stackno);
            break;
        case 4:
            printf("\nEnter new stack number (1 or 2): ");
            scanf("%d", &stackno);
            break;
        case 5:
        		
        		break;
        default:
        		printf("\nInvalid choice\n");
        }
    } while(choice!=5);
}
