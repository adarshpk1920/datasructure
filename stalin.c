#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void main()
{
int opt;
do 
{
printf("enter your choice 1.push 2.pop 3.display 4.exit");
scanf("%d",&opt);
switch(opt)
{
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    exit(0);
    break;
}}
while(opt!=4);
}

void push()
{
struct node *new=NULL;
new=(struct node*)malloc(sizeof(struct node));
printf("Enter the data to be pushed");
scanf("%d",&new->data);
new->next=top;
top=new;
}
void pop(){
struct node *ptr;
if(top==NULL)
printf("struct underfollow");
else{
printf("the popped item id %d",top->data);
ptr=top;
top=top->next;
free(ptr);
}}
void display()
{
struct node *temp;
temp=top;
if(temp==NULL)
printf("null");
else
{
 while(temp!=NULL)
{
printf("%d",top->data);
top=top->next;
}
}}
