//Accept a string and DISPLAY longest word
#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
using namespace std;
 void longest(string *s,int);
int main()
{
	char s[1000],sw[20];
	string word[20],*str;
	int i,wc=0,c=0,k,w=0;
	cout<<"enter your sentence"<<endl;
	cin.getline(s,1000);
//	cout<<s;
	for(i=0;s[i]!='\0';i++)
	{
		c=0;
		while(s[i]!=' '&&s[i]!='\0')
		{
			sw[c++]=s[i++];
		}
		sw[c]='\0';
		word[k++]=sw;
	}
	longest(word,k);
}
void longest(string *str,int k)
{
	 string s=str[0];
	int l=str[0].size();
	
	for(int i=1;i<k;i++)
	{
		if(str[i].size()>l)
		{
			l=str[i].size();
			s=str[i];
		}
	}
	cout<<s;
}
