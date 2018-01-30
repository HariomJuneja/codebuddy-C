/* program for sorting of lines in a given file by its size */

#include <stdio.h>

main()
{
char temp[100], **str=0,ptr[100];
int i=0,j,k,cnt=0;

FILE *fp;
           
fp=fopen(file name,"r");                                 /*opening file in read mode */
while((fgets(temp,80,fp))!=0)                            /* reading data line by line */
{
str=(char **) realloc(str,(i+1)*sizeof(char *));          /*allocating memory to pointer */
str[i]=0;
str[i]=(char *) realloc(str[i],strlen(temp)+1);           /*allocating memory to each pointer to read a single line */
strcpy(str[i],temp);                                      /*copying data from temp to str[i] */
++i;
cnt++;
}
fclose(fp);
for(j=0;j<cnt;j++)
printf("%s\n",str[j]);                                   /* printing data that we got from file */
for(j=0;j<cnt-1;j++)
{
for(k=j+1;k<cnt;k++)
{
if((strlen(str[j]))>(strlen(str[k])))                   /* sorting lines by its size */
{
strcpy(ptr,str[j]);
strcpy(str[j],str[k]);
strcpy(str[k],ptr);
}
}
}
for(j=0;j<cnt;j++)
printf("%s\n",str[j]);                                   /* printing sorted lines */
}