/* user define memmove function */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Memmove(char *p)
{
int n,i,m,j;
printf("enter the position ");                 
scanf("%d",&n);
printf("enter the string position\n");         
scanf("%d",&m);
j=strlen(p+m);
for(i=0;i<=j;i++)
{
p[i+n]=p[i+m];
}
}

main()
{
char str[20];
puts("enter string");    /* enter the string */
gets(str);
Memmove(str);            /* calling function */
printf("%s",str);
}

