//Accept a string and convert initial and last charecter
// of each word to upper case and rest to lower case
#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
using namespace std;
 void convert_case(string *s,int);
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
	convert_case(word,k);
}
 void convert_case(string *s,int c)
{
	int l,i;
	for(int i=0;i<c;i++)
	  {
	  	l=s[i].size();
	     s[i][0]=s[i][0]-32;
	     s[i][l-1]=s[i][l-1]-32;
	  }
	  for(i=0;i<c;i++)
	  cout<<s[i]<<" ";
	
}
