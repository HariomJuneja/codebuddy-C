/* user define string copy function */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *mystrcpy(char *p1, char *p2, int n)
{ int i;
for(i=0;p2[i];i++)
{ 
p1[i+n]=p2[i];          /* copying string2 at given position n */
}
}

main()
{
int pos=0;
char s1[20],s2[20];
puts("enter string1\n");    /* enter string1 */
fgets(s1,20,stdin);
puts("enter string2\n");    /* enter string2 to copy */
fgets(s2,20,stdin);
printf("enter position\n");   /* enter the position where you want to copy your string */
scanf("%d", &pos);
mystrcpy(s1,s2,pos);          /* calling function */
printf("%s",s1);
}
