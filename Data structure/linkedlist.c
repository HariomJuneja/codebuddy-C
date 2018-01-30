/* program to manage student data using linked list*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student      /* structure and structure member decleration */
{ int roll;
float mark;
char name[20];
struct student *next;          /*structure pointer */
}NODE;

NODE *add(NODE *head)
void *print(NODE *ptr)

main()
{
char ch;
NODE *head=NULL;
while(1)
{
printf("** MENU ** \n ");
printf("a:add a record \n p:print \n q:quit\n ");
printf("enter your choice ");
scanf("%c",&ch);
switch(ch)
{
case 'a':head=add(head);break;
case 'p':print(head);break;
case 'q':return;
default: printf("invalid choice\n");
}
}
}

NODE *add(NODE *head)
{
NODE *nu, *temp;
nu=malloc(sizeof(NODE));
printf("enter name:\n");
gets(nu->name);
printf("enter mark ");
scanf("%f",&nu->mark);
printf("enter roll\n");
scanf("%d",&nu->roll);
if(head==NULL)
{
head=nu;
nu->next=0;
}
else
{
temp=head;
while(temp->next)
{
temp=temp->next;
}
nu->next=0;
temp->next=nu;
}
return head ;
}

void print(NODE *ptr)
{
while(*ptr)
{
printf("%s %d %f ",ptr->name,ptr->roll,ptr->mark);
ptr=ptr->next;
}
}
