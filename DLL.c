#include <stdio.h>
#include <stdlib.h>
struct node
{char ssn[20],name[20],dept[20],designation[20];
    int sal;
    int data;
    struct node*llink;
    struct node*rlink;
};
typedef struct node*NODE;
NODE start=NULL;
int count;
 NODE create()
 {
    NODE snode;
    snode=(NODE)malloc(sizeof(struct node));
    if(snode==NULL)
    {
        printf("no memory");
    }
    printf("ssn,name,dept,designation,sal");
    scanf("%s%s%s%s%d",snode->ssn,snode->name,snode->dept,snode->designation,&snode->sal);
    snode->llink=NULL;
    snode->rlink=NULL;
    count++;
    return snode;
 }

 NODE insertbegin()
 {
    NODE temp;
    temp=create();
    if(start==NULL)
    {
        return temp;
    }
    temp->rlink=start;
    start->llink=temp;
 }

 NODE deletebegin()
 {NODE cur;
    if(start==NULL)
    {
        return NULL;
    }
    if(start->rlink==NULL)
    {
        printf("the employee of ssn %s is deleted",start->ssn);
        return NULL;
    }
    cur=start;
    start=start->rlink;
    cur->llink=NULL;
    cur->rlink=NULL;
    free(cur);
    count--;
    return start;

 }
 NODE insertend()
 {
    NODE cur,temp;
    temp=create();
    if(start==NULL)
    {
        printf("DLL is empty");
        return NULL;
    }
    cur=start;
    while(cur!=NULL)
    {
        cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;
}
NODE deleteend()
{
    NODE cur,pre;
    if(start==NULL)
    {
        printf("DLL is empty");
        return NULL;
    }
    cur=start;
    while(cur!=NULL)
    {
        pre=cur;
        cur=cur->rlink;
    }
    pre->rlink=NULL;
    count--;
    free(cur);
    return start;
}

void queue()
{int ch;
    while(1)
    {
        printf("\n1.insertfront\n2.deletefront\n3.exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            start=insertbegin();
            break;
            case 2:
            start=deletebegin();
            break;
            case 3:
            return;
        }


    }
}

void display()
{
    int i;
    NODE cur;
    if(start==NULL)
    {
        printf("DLL is empty");
    }
    cur=start;
    while(cur!=NULL)
    {
        printf("|ssn:%s||name:%s||dept:%s||designation:%s||sal:%d||",cur->ssn,cur->name,cur->dept,cur->designation,cur->sal);
        cur=cur->rlink;
    }
    printf("the number of employee node is %d",count);
}

void main()
{
    int ch,n,i;
    while(1)
    {
        printf("\n1.insertfront\n2.insertend\n3.deleteend\n4.display\n5.queue\n6.exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter the number of employe");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
            start=insertbegin();
            }
            break;
            case 2:
            start=insertend();
            break;
            case 3:
            start=deleteend();
            break;
            case 4:
            display();
            break;
            case 5:
            queue();
            break;
            case 6:
            exit(0);

        }

    }
}


   

