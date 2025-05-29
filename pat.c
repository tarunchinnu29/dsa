#include <stdio.h>
#include <stdlib.h>
char str[20],pat[20],rep[20],res[20];
int i,c,m,k,j,flag=0;
void stringmatch()
{
while(str[m]!='\0')
{
if(str[c]==pat[i])
{
    c++;
    i++;
    if(pat[i]=='\0')
    {
        flag=1;
        for(k=0;rep[k]!='\0';j++,k++)
        {
            res[j]=rep[k];

        }
        i=0;
        m=c;
    }
}
else
{
    res[j]=str[m];
    j++;
    m++;
    i=0;
    c=m;
}
res[j]=='\0';
}
}

void main()
{
    printf("enter the main string\n");
    gets(str);
    printf("enter the pattern string\n");
    gets(pat);
    printf("enter the replace string\n");
    gets(rep);
    printf("string before pattern matching\n%s\n",str);
    stringmatch();
    if(flag==1)
    {
        printf("string after pattern matching\n%s\n",res);
    }
    else
    printf("invalid");
}