#include <stdio.h>
#include <stdlib.h>
int a[20][20],q[20],reach[20],visit[20],i,n,j,f=0,r=-1,count=0;
void bfs(int v)
{
    for(i=1;i<=n;i++)
    
        if(a[v][i]&&!visit[i])
        q[++r]=i;
        if(f<=r)
        {
            visit[q[f]]=1;
            bfs(q[f++]);
        }
    
} 
void dfs(int v)
{
    int i;
    reach[v]=1;
    for(i=1;i<=n;i++)
    {
        if(a[v][i]&&!reach[i])
        {
        printf("%d->%d",v,i);
        count++;
        dfs(i);
    }
}}
void main()
{
    int v,ch;
    printf("\nnenter the total number of vertices\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        q[i]=0;
        visit[i]=0;
    }
for(i=1;i<n;i++)
    reach[i]=0;

    printf("\nconverting vertex into the matrix\n");
    for(i=1;i<=n;i++)
     for(j=1;j<=n;j++)
       scanf("%d",&a[i][j]);
    while(1)
    {
    printf("\n1.bfs\n2.dfs\n3.exit\n");
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("enter the starting vertex");
        scanf("%d",&v);
        bfs(v);
        if((v<1)||(v>n))
        {
            printf("bfs cannot occur");
        }
        else
        printf("%d",v);
        for(i=1;i<=n;i++)
        if(visit[i])
        printf("%d\t",i);
        break;
        case 2:
        dfs(1);
        if(count==n-1)
        printf("graph is connected");
        else
        printf("graph is not connected");
        break;
        case 3:
        exit(0);
        break;
    }
    


}}