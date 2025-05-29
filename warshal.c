#include <stdio.h>
void warsh(int a[][10],int n)
{
    int i,j,k;
    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    a[i][j]=a[i][j]||a[i][k]&&a[k][j];
}

void main()
{
int i,j,n,a[10][10];
printf("enter the value of n \n ");
scanf("%d",&n);
printf("enter the adjacency matric \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
warsh(a,n);
for(i=0;i<n;i++){
for(j=0;j<n;j++)
printf("%d",a[i][j]);
printf("\n");
}
}
