//In a word find weather consicutive  vowels are present or not
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
 int i,j,flag=0;
 string s;
 cout<<"enter your word"<<endl;
 getline(cin,s);
 for(i=0;s[i]!='\0';i++)
  {
    if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'))
     {
cout<<s[i]<<endl<<s[i+1]<<endl;
        flag=1;
        }
     }
  }



Language Version:  GCC 7.2.0
