# include <stdio.h>
# define INF 999
int prim(int c[10][10],int n,int s)
{
    int ver[10],v[10],d[10],i,j,min,sum=0,u;
    for(i=1;i<=n;i++)
    {
        ver[i]=s;
        d[i]=c[s][i];
        v[i]=0;

    }v[s]=1;
    for(i=1;i<=n-1;i++)
    {
        min=INF;
        for(j=1;j<=n;j++)
        
            if(v[j]==0 && d[j]<min)
            {
                min=d[j];
                u=j;
            }
            v[u]=1;
            sum=sum+d[u];
            printf("\n%d->%d sum=%d",ver[u],u,sum);
            for(j=1;j<=n;j++)
            
                if(v[j]==0 && c[u][j]<d[j])
                {
                    d[j]=c[u][j];
                    ver[j]=u;
                }
                       
        }
        
 
 return sum;}
        void main()
        {
            int i,j,c[10][10],n,s,res;
            printf("\n enter the number of node\n");
            scanf("%d",&n);
            printf("\n enter the grapgh data:\n");
            for(i=1;i<=n;i++)
            
                for(j=1;j<=n;j++)
                scanf("%d",&c[i][j]);
                

        printf("\n enter the source node:\n");
        scanf("%d",&s);
        res=prim(c,n,s);
        printf("cost is%d",res);
        


        }
