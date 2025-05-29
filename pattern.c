# include<stdio.h>
char str[50],pat[50],rep[50],res[50];
int i,j,m=0,c=0,k=0,flag=0;
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
                for(k=0;rep[k]!='\0';k++,j++)
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
        res[j]='\0';
    }
}
void main()
{
    printf("\nenter the main string: \n");
    gets(str);
    printf("\nenter the pattrn string: \n");
    gets(pat);
    printf("\nenteer the replace string: \n");
    gets(rep);
    printf("\nthe string before changing: %s \n",str);
    stringmatch();
    printf("\nthe string after changing is %s \n",res);
    
}