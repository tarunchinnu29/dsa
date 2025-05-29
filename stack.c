# include <stdio.h>
# define MAX 3
int stack[3];
int top=-1;
void push();
int pop();
void display();
void palindrome();
void main()

{
    int item,ch;
    while(1)
    {
    printf("\n stack operations:\n");
    printf("\n 1.push\n");
    printf("\n 2.pop\n");
    printf("\n 3.display\n");
    printf("\n 4.palindrome\n");
    printf("enter the choice :");
    scanf("%d",ch);
switch(ch)
    {
case 1:
printf("enter the item");
scanf("%d",item);
push(item);
break;
case 2:
pop(item);
break;
case 3:
display();
break;
case 4:
palindrome();
break;
default:
printf("invalid choice");
break;
    }


    }
}
void push(int item)
{
    if(top==-1)
    {
        printf("stack is underflow");
    }
    top=top+1;
    stack[top]=item;

}

int pop(int item)
{
    if(top==MAX-1)
    {
printf("stack is overflow");
    }
    item=stack[top];
    top=top-1;
    return item;

}
void display()
{
    int i;
    if(top==-1)
    {
        if(top==-1)
        {
            printf("stack is empty");

        }
        else
        {
            for(i=0;i<3;i++)
            printf("%d",stack[i]);
        }
    }
}
void palindrome()
{
    int i;
    printf("stack elements are");
    for(i=0;i<3;i++)
    printf("%d",stack[i]);
    int n=stack[i];

printf("reversing th stack elements are:");
    for(i=3;i>0;i--)
    printf("%d",stack[i]);
    int p=stack[i];

    if(n==p)
    {
        printf("it is an palindrome");
    
    }
    else
    printf("it is not an palindrome");

}