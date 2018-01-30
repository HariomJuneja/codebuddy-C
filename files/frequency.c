#program to calculate frequency of each character in a string

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
char str[MAX_SIZE];
int i,len;
int freq[26];
printf("enter string:\n");        /* Taking input from user */
gets(str);
len=strlen(str);                  /* calculating the length of string */
for(i=0;i<26;i++)                 
{ 
    freq[i]=0;                    /* assingnging zero to all */
}
for(i=0;i<len;i++)
{
if(str[i]>='a' && str[i]<='z')     /*checking for character i.e for lowercase */
{
freq[str[i]-97]++;                  /* substracting 97 from that lowercase character and incresing the count of that character in array */
}
else if(str[i]>='A' && str[i]<='Z')
{
freq[str[i]-65]++;
}
}
printf(" freq of all character in given string :\n");
for(i=0;i<26;i++)
{
if(freq[i]!=0)
{
printf(" '%c'=%d\n",(i+97),freq[i]);                           /* printing all the characters with there count*/
}
}
return 0;
}
