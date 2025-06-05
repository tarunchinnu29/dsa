#include<stdio.h>
#include<stdlib.h>
# define INF 999
void warsh(int c[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    c[i][j]=c[i][j]||c[i][k]&&c[k][j];
}
void main()
{
    int i,j,n,c[10][10];
    printf("\n enter the number of nodes\n");
    scanf("%d",&n);
    printf("\n enter the graph data\n");
      for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    scanf("%d",&c[i][j]);
    warsh(c,n);
    printf("\n the sorted  matrix is\n");
      for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)
    printf("%d\t",c[i][j]);
    printf("\n");
      }

}