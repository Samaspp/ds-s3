//brackets
#include<stdio.h>
#define SIZE 100
char stack[SIZE],top=-1;
void push(char data)
{
    if(top==SIZE-1)
        printf("\nStack Overflow");
    else   
        stack[++top]=data;    
}
char pop()
{
    char del;
    if(top==-1)
    {
        printf("\nStack empty.");
        return '\0';
    }
    else
    {
        del=stack[top--];
        return del;
    }
}
int isMatching(char c1,char c2)
{
    if(c1=='('&&c2==')')
        return 1;
    else if(c1=='{'&&c2=='}')
        return 1;
    else if(c1=='['&&c2==']')
        return 1;
    else    
        return 0;            
}
int openingBracket(char ch)
{
    if(ch=='('||ch=='{'||ch=='[')
        return 1;
    else    
        return 0;    
}
int closingBracket(char ch)
{
    if(ch==')'||ch=='}'||ch==']')
        return 1;
    else
        return 0;    
}
int BracketsBalanced(char exp[])
{
    int i=0;
    while(exp[i]!='\0')
    {
        if(openingBracket(exp[i]))
            push(exp[i]);
        else if(closingBracket(exp[i]))
        {
            if(top==-1)
                return 0;
            else
            {
                if(isMatching(pop(),exp[i]))
                {

                }
                else
                return 0;
            }
        }
        i++;
    }
   if(top==-1)
   return 1;
   }
int main()
{
    char exp[SIZE],del;
    printf("Enter an expression : ");
    scanf("%s",exp);
    int flag=BracketsBalanced(exp);
    if(flag)
        printf("Balanced\n");
    else   
        printf("Not Balanced\n");    
    return 0;    

    if(top==-1)
    {
        printf("\nStack empty.");
        return '\0';
    }
    else
    {
        del=stack[top--];
        return del;
    }
}

