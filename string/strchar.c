/*user define strchr function */

#include<stdio.h>
#include<string.h>

char *findchar(char *p, char ch)
{
int i;
for(i=0;p[i];i++)
{
if(p[i]==ch)             /* checking for character if match return location */     
return p+i ;
}
return NULL;             /* if not found return NULL */
}
int main()
{
 char str[200],ch;
 printf("enter the string\n");      /* enter the string */
 fgets(str,200,stdin);
 str[strlen(str)-1]=0;
 printf("enter char to search:");
 ch=getchar();                          /* enter the character to search*/
 if(findchar(str,ch)==NULL)             /* calling function */
 printf("not found");
 else
 printf("found");
 }