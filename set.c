#include<stdio.h>
#include<string.h>
void uni(char*,char*,char*);
void inter(char*,char*,char*);
void differ(char*,char*,char*);
void main()
{
char s1[20],s2[20],s3[20];
printf("Enter the first string\n");
scanf("%s",s1);
printf("Enter the second string\n");
scanf("%s",s2);
uni(s1,s2,s3);
printf("union is %s \n",s3);
inter(s1,s2,s3);
printf("interscetion is %s \n",s3);
differ(s1,s2,s3);
printf("difference is %s \n",s3);
}
void uni(char*s1,char*s2,char*s3)
{
int i,l;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='0'&&s2[i]=='0')
{
s3[i]='0';
}
else
{
s3[i]='1';
}
}
s3[i]='\0';
}
void inter(char*s1,char*s2,char*s3)
{
int i,l;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='1'&&s2[i]=='1')
{
s3[i]='1';
}
else
{
s3[i]='0';
}
}
s3[i]='\0';
}
void differ(char*s1,char*s2,char*s3)
{
int i,l;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='1'&&s2[i]=='0')
{
s3[i]='1';
}
else
{
s3[i]='0';
}
}
s3[i]='\0';
}
