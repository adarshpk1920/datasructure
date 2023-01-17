#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node*root=NULL;
struct node*ptr=NULL;
struct node*ptr1=NULL;
void insert();
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
void search(struct node*);
void main()
{
int opt;
do
{
printf("ENTER YOUR CHOICE: \n");
printf("1.INSERT \n 2.INORDER \n 3.PREORDER \n 4.POSTORDER \n 5.search \n 0.EXIT :");
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
case 5:search(root);
break;
case 0:
default:break;
}
} while(opt!=0);
}
void insert()
{
int x;
struct node*new=NULL;
new = (struct node*)malloc(sizeof(struct node));
printf("enter the data to be inserted : ");
scanf("%d",&x);
new->right = NULL;
new->left = NULL;
new->data=x;
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
printf("data already present");
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
void inorder(struct node* ptr)
{
if(ptr!=NULL)
{
inorder(ptr->left);
printf(" %d ",ptr->data);
inorder(ptr->right);
}
}
void preorder(struct node* ptr)
{
if(ptr!=NULL)
{
printf(" %d ",ptr->data);
preorder(ptr->left);
preorder(ptr->right);
}
}
void postorder(struct node* ptr)
{
if(ptr!=NULL)
{
postorder(ptr->left);
postorder(ptr->right);
printf(" %d ",ptr->data);
}
}
void search(struct node *ptr)
{
int data,flag=0;
if(ptr == NULL)
printf("Empty tree");
else {
printf("Enter the element to find : ");
scanf("%d",&data);
while(ptr!=NULL){
if(data == ptr->data){
printf("Element found");
ptr=NULL;
flag=1;
}
else if(data > ptr->data)
ptr=ptr->right;
else
ptr=ptr->left;
}
if(flag==0)
printf("Element not found");		
}
}	

