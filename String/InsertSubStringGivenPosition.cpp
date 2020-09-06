//To insert the substing at a given position
#include<stdio.h>
#include<string.h>
void substring(char *p,char *q,int l,int m,int);
void main()
{
int l,m,z;
char ch[20],ch2[10];
char *p,*q;
printf("enter the string \n");
gets(ch);
printf("enter the substring\n");
gets(ch2);
printf("neter the position\n");
scanf("%d",&z);
l=strlen(ch);
m=strlen(ch2);
p=ch;
q=ch2;
substring(p,q,l,m,z);
}
void substring(char *p,char *q,int l,int m,int z)
{
int i,y;
char ch[30];
for(i=0;i<z;i++)
{
ch[i]=*p;
p++;
}
for(y=0;y<m;y++)
{
ch[i]=*q;
i++;
q++;
}
for(;i<l+m;i++)
{
ch[i]=*p;
p++;
}
ch[i]='\0';
printf("string after inserting substring\n");
puts(ch);
}
