//Accept a string and DISPLAY longest word
#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
using namespace std;
 string* replace(string *s,int);
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
	str=replace(word,k);
for(i=0;i<k;i++)
cout<<str[i]<<" ";
}
string* replace(string *str,int k)
{
	int i=0;
for(i=0;i<k;i++)
{	
	if(str[i]==("january"))
	str[i]="august";
	else if(str[i]==("26"))
	str[i]="15";
	else if(str[i]==("republic"))
	str[i]="independence";
 }  
 return str;

}
