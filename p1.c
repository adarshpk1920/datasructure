#include<stdio.h>
void main()
{
int n,m,a[10],b[10],c[20],i,j,k,p;
printf("enter the size of first array");
scanf("%d",&n);
printf("enter the size of second array");
scanf("%d",&m);
printf("enter elements to first array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter elements to second array");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(a[i]>b[j])
{
c[k]=b[j];
k++;
j++;
}
else
{
c[k]=a[i];
i++;
j++;
k++;
}
}
while(i<n)
{
c[k]=a[i];
i++;
k++;
}
while(j<m)
{
c[k]=b[j];
j++;
k++;
}
p=k;
printf("elements are\n");
for(k=0;k<p;k++)
{
printf("%d\n",c[k]);
}
}

