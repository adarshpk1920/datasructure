#include<stdio.h>
void insert();
void delete();
void display();
int front=-1;
int rear=-1;
int item,a[10],size=4;
void insertion()
{
int item;
printf("enter the elementto be inserted");
scanf("%d",&item);
if((rear+1)%size==front)
{
printf("queue full");
}
else if(front==-1 && rear==-1)
{
front=0;
rear=0;
a[front]=item;
}
else
{
rear=(rear+1)%size;
a[rear]=item;
}
}
void delete()
{
if(front==-1 && rear==-1)
{
printf("queue overflow");
}
else if(front==rear)
{
printf("the element deleted is %d \n ",a[front]);
front=-1;
rear=-1;
}
else
{
printf("elements deleted is %d \n",a[front]);
front=(front+1)%size;
}
}
void display()
{
int f;
if((front==-1)&&(rear==-1))
{
printf("queue empty");
}
else
{
f=front;
printf("elements are \n");
while(f>-1)
{
printf("%d",a[f]);
if(f==rear)
break;
f=(f+1)%size;
}
}
}
void main()
{
int size,opt,c;
do
{
printf("menu \n 1.insertion \n 2.deletion \n 3.display \n");
scanf("%d",&opt);
switch(opt)
{
case 1:insertion();
       //display();
       break;
case 2:delete();
       //display();
       break;
case 3:display();
       break;
default:printf("\n invalid entry");
}
printf("do you want to continue?");
scanf("%d",&c);
}
while(c==1);
}


