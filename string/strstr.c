/* user define strstr function */


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{   
  char s1[30], s2[30];
 printf("enter 1st string\n");
 gets(s1);                          /* taking string1 input from user using gets() */
 printf("enter 2nd string\n");
 gets(s2);                          /* string2 to search it in string 1 */
 if(STRSTR(s1,s2))                  /* calling STRSTR() */
 printf("found\n");
 else
 printf("not found\n");
  }
 int STRSTR(char *p1,char *p2)
 {
 int i=0,j=0;
 for(i=0;p1[i];i++)         
 {
 if(p1[i]==p2[j])                   /* Checking for 1st character i.e if equal then proceed further */
 {
 for(j=1;p2[j];j++)  
 {
 if(p1[i+j]!=p2[j])                 /* checking for further character if equal than proceed otherwise break */
 {
 break;
 }
 if(!p2[j])                        /* if all characters of s2 present in s1 than return 1 */
 {
 return 1;
 }
 }
 }
 if(!p1[i])                     
 {
 return 0;
 }
 }
 }