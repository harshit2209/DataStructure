//find the first occurence of second string in first
#include<iostream>
using namespace std;
char  *my_strstr(const char *s1,const char *s2);
int main(int argc,char *argv[])
{
 char *s1,*s2;
 s1=argv[1];
 s2=argv[2];
 my_strstr(s1,s2);
}
char  *my_strstr(const char *s1,const char *s2)
{
  int i,flag=1,k,j;
  static char s3[10];
  s3[0]='\0';
 cout<<"first string\t"<<s1<<endl;
 cout<<"second string\t"<<s2<<endl;
 for(i=0;*(s1+i)!='\0';i++)
{
 if((*(s1+i))==(*(s2)))
 {
   k=i;
   j=0;
   while(*(s1+k)==*(s2+j))
   {
     s3[j]=*(s2+j);
     j++;
     k++;
   }
   if(*(s2+j)=='\0')
  {
   s3[j]='\0';
   break;
 }
 }
}
if(s3[0]!='\0'&&s2[j]=='\0')
cout<<s3;
else
cout<<"NULL";
}




Language Version:  GCC 7.2.0
