#include <stdio.h>
#include <stdlib.h>
struct node
{
    char usn[20],name[10],programme[20];
    int sem,phoneno;
    int data;
    struct node*link;
};
typedef struct node*NODE;
int count=0;
NODE start=NULL;


 NODE create()
 {
NODE snode;
snode=(NODE)malloc(sizeof(struct node));
if(snode==NULL)
{
    printf("no memory");
}
printf("usn,name,programme,sem,phoneno");
scanf("%s%s%s%d%d",snode->usn,snode->name,snode->programme,&snode->sem,&snode->phoneno);
count++;
snode->link=NULL;
return snode;
 }


NODE insertfront(NODE start)
{
    NODE temp;
    temp=create();
    if(start==NULL)
    {
        return temp;
    }
    temp->link=start;
}

NODE deletefront(NODE start)
{NODE cur;
    if(start==NULL)
    {
        printf("sll is empty");
        return NULL;
    }
    if(start->link==NULL)
    {
        printf("the student of usn %s need to be deleted is: ",start->usn);
        count--;
        free(start);
        return NULL;
    }
    cur=start;
    start=start->link;
    count--;
    free(cur);
    return start;
}

NODE insertend(NODE start)
{
    NODE temp,cur;
    temp=create();
    if(start==NULL)
    {
        printf("SLL is empty");
        return NULL;
    }
cur=start;
while(cur->link!=NULL)
{
    cur=cur->link;
}
cur->link=temp;
return start;
}


NODE deleteend(NODE start)
{
    NODE cur,pre;
    cur=start;
    while(cur->link!=NULL)
    {
        pre=cur;
        cur=cur->link;
    } 
    free(cur);
    pre->link=NULL;
    count--;
    return start;
}

void display(NODE start)
{ NODE cur;
    if(start==NULL)
    {
   printf("SLL is empty");
    }
    cur=start;
    while(cur->link!=NULL)
    {
        printf("|name:%s||usn:%s||programme:%S||sem:%d||phoneno:%d|",cur->name,cur->usn,cur->programme,cur->sem,cur->phoneno);
        cur=cur->link;
    }
    printf("number of student node is%d",count);
}
 void stack()
 {int ch;
    while(1)
    {
        printf("\n1.push operation \n2. pop operation \n 3.exit \n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            start=insertfront(start);
            break;
            case 2:
            start=deletefront(start);
            break;
            case 3:
            return ;
            
        }
    }
 }

 void main()
 {
    int ch,i,n;
    while(1)
    {
        printf("\n1.insertbegin\n");
         
          printf("\n2.insertend\n");
           printf("\n3.deleteend\n");
           printf("\n4.display\n");
           printf("\n5.stackoperation\n");
           printf("\n6.exit\n");
           printf("enter the choice");
           scanf("%d",&ch);
           switch(ch)
           {
            case 1:
            printf("enter the number of students");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
                start=insertfront(start);
            break;
           case 2:
            start=insertend(start);
            break;
            case 3:
            start=deleteend(start);
            break;
            case 4:
            display(start);
            break;
            case 5:
            stack();
            break;
            case 6:
            exit(0);
            break;


           }
        
        
        

    }
 }