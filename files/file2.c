

#program to remove the extra spaces and extra new lines from a given text file.
#include<stdio.h>
#main()
{
char *str,filename[10];
int i,size;
FILE *fsrc;                     /* declaration of file pointer */
printf("enter file name\n");     /*enter your file name*/
   
scanf("%S\n",filename);
fsrc=fopen("file name","r");    /*openinig of file*/
fseek(fsrc,0,2);                /* bringing pointer to last location for finding the size of file*/
size=ftell(fsrc)+1;              /*ftell is used to find the size of a file*/
rewind(fsrc);                    /*bringing file pointer to starting position*/
str=calloc(1,size);              /*allocating memory to a pointer*/
fread(str,size,1,fsrc);          /*reading line one by one from file */
fclose(fsrc);

while(str[0]==32)                        /*checking that space is present at the starting of line or not */
{
memmove(str,str+1,strlen(str+1)+1);      /*moving back by one location*/
}
while(str[strlen(str)-1]==32)            /*checking space is present at last */
{
str[strlen(str)-1]='\0';                  /*entering Null character at last*/
}
for(i=0;str[i];i++)
{
if((str[i]==32)&&((str[i+1])==32)         /*checking for extra space is present inbetween two characters*/
{
memmove(str+i,str+i+1,strlen(str+i+1)+1);  /*moving back by one location*/
i--;
}
else if((str[i]==10)&&(str[i+1]==10))      /*checking for new line*/
{
memmove(str+i,str+i+1,strlen(str+i+1)+1);   /*if extra new lines are there than moving */
i--;
}
}                                            
fsrc=fopen("filename","w");
fwrite(str,size,1,fsrc);                     /*writing data into file*/
fclose(fsrc);
}