#include<stdio.h>
#include<stdlib.h>
void display();
void insert_first();
void create();
struct node
{
struct node *next;
int data;
};
struct node *head=NULL;
struct node *new=NULL;
struct node *ptr=NULL;
void create()
{
int x;
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
printf("insufficient memory");
else
{
printf("\n enter the data to insert \n");
scanf("%d",&x);
new->data=x;
new->next=NULL;
}
}
void insert_first()
{
create();
if(head==NULL)
{
head=new;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=new;
new->next=NULL;
}
}
void insert_beg()
{
create();
if(head==NULL)
{
head=new;
}
else
{
new->next=head;
head=new;
}
}
void insert_end()
{
create();
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=new;
new->next=NULL;
}

void display()
{
struct node *ptr;
printf("The linked list is:");
ptr=head;
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}
int main()
{
int c,opt;
do
{
printf("\n menu 1.creation 2.insert at beginning 3.insertion at end 4.display");
scanf("%d",&opt);
switch(opt)
{ 

  case 1:insert_first();
         display();
         break;
  case 2:insert_beg();
         display();
         break;
  case 3:insert_end();
         display();
         break;
  case 4:display();
         break;
  default:printf("\n invalid entry");
}

 printf("do you want to continue (1/2):");
 scanf("%d",&c);
}
while(c==1);
}




