/* to find the length of a string */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int len(char *p)
{
int l=0,i;
for(i=0;i<20;i++)
{
if(p[i]!= NULL)              
    l++;
}
return l;
}

main()
{
int a=0;
char str[20];
printf("enter the string\n");    /*enter the string */
gets(str);
a=len(str);                      /* calling function */
printf("%d",a);
}
