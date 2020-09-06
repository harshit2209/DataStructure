//remove the vowel from the given string 
#include<stdio.h>
#include<string.h>
void vowel(char *ch,int g);
void main()
{
int l;char *p,ch[10];
printf("enter the string\n");
gets(ch);
p=ch;
l=strlen(ch);
vowel(p,l);
}
void vowel(char *p,int k)
{
int i;
char ch[10];
for(i=0;i<k;i++)
{
if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
{
ch[i]=*(p+1);
p=p+2;
}
else
{
ch[i]=*p;
p++;
}
}
ch[i]='\0';
printf("string after removal of vowel\n");
puts(ch);
}
