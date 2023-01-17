#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void display();
int front=-1,rear=-1,item,size=8,a[10];
void main()
{
int opt;
do
{
printf("\nEnter your option\n 1. insertion\n 2.deletion\n 3.display\n 4.exit\n");
scanf("%d",&opt);
switch(opt)
{
case 1:insertion();
break;
case 2:deletion();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("\ninvalid entry\n");
}
}while(opt!=4);
}
void insertion()
{
if(front==(rear+1)%size)
{
printf("queue is full");
}
else
{
printf("\nEnter the item\n");
scanf("%d",&item);
}
if(front==-1 && rear==-1)
{
front=0;
rear=0;
a[rear]=item;
}
else
{
rear=(rear+1)%size;
a[rear]=item;
}
}
void deletion()
{
if(front==-1)
{
printf("no element");
}
else if(front==rear)
{
printf("\nThe element to be deleted is %d\n",a[front]);
front=rear=-1;
}
else
{
printf("\nThe element to be deleted is %d\n",a[front]);
front=(front+1)%size;
}
}
void display()
{
int temp;
temp=front;
if((temp==-1)&&(rear==-1))
{
printf("no element");
}
else
{
printf("\nqueue elements are\n");
while(temp<=rear)
{
printf("%d\n",a[temp]);
temp=(temp+1)%size;
}
}
}


