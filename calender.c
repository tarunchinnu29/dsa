#include <stdio.h>
#include <stdlib.h>
int i;
struct day
{
    char*name;
    int*date;
    char*description;
}calender[7];
 struct day*create()
 {
    for(i=0;i<7;i++)
    {
        calender[i].name=((char*)malloc(50*sizeof(char)));
        calender[i].description=((char*)malloc(100*sizeof(char)));
    }
    return calender;
 }

 struct day*read(struct day*calender)
 {
    for(i=0;i<7;i++)
    {
        printf("\n enter the name of the day\n");
        scanf("%s",&calender[i].name);
        printf("\n enter the date of the day\n");
        scanf("%d",&calender[i].date);
        printf("\nenter the discription of the day\n");
        scanf("%s",&calender[i].description);
    }
 }

 struct day*display(struct day*calender)
 {
    printf("\nthe calender events are\n");
    for(i=0;i<7;i++)
    {
        printf("name:%s,date:%d,description:%s",calender[i].name,calender[i].date,calender[i].description);
    }
 }

 void main()
{
    create();
    read(calender);
    display(calender);
}