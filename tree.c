#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *right;
struct node *left;
};
void insert();
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*); 
struct node *root=NULL;
struct node *ptr=NULL;
struct node *new=NULL;
struct node *ptr1=NULL;
void main()
{
int opt;
do
{
printf("\nEnter your choice:\n1.insertion\n 2.inorder\n 3.preorder\n 4.postorder\n ");
scanf("%d",&opt);
switch (opt)
{
case 1:insert();
       break;
case 2:inorder(root);
       break;
case 3:preorder(root);
       break;
case 4:postorder(root);
       break;
default:printf("invalid choose");
}
}
while(opt!=4);
}
void insert()
{
int x;
new=(struct node *)malloc(sizeof(struct node));
if(new==NULL)
{
printf("insufficient memory");
}
else
{
printf("enter the data to be inserted ");
scanf("%d",&x);
new->data=x;
new->right=NULL;
new->left=NULL;
if(root==NULL)
{
root=new;
}
else
{
ptr=root;
while(ptr!=NULL)
{ 
if(x==ptr->data)
{
printf("item present in the tree \n ");
break;
}
else if(x>ptr->data)
{
ptr1=ptr;
ptr=ptr->right;
}
else
{
ptr1=ptr;
ptr=ptr->left;
}
}
if(ptr==NULL)
{
if(x>ptr1->data)
{
ptr1->right=new;
}
else
{
ptr1->left=new;
}
}
}
}
}
void inorder(struct node*ptr)
{
if(ptr!=NULL)
{
inorder(ptr->left);
printf("%d \n",ptr->data);
inorder(ptr->right);
}
}  
void preorder(struct node*ptr)
{
if(ptr!=NULL)
{
printf("%d \n",ptr->data);
preorder(ptr->left);
preorder(ptr->right);
}
}  
void postorder(struct node*ptr)
{
if(ptr!=NULL)
{
postorder(ptr->left);
postorder(ptr->right);
printf("%d \n",ptr->data);
}
} 

