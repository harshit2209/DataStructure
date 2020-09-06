#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int convert(string s){
	int a=0;
	for(int i=0;i<s.length()/2;i++)
		a+=(abs((int(s[i])-int('A')+1)-(int(s[s.length()-i-1])-int('A')+1)));
	if(s.length()%2==1)
		 a+=abs(int((s[s.length()/2])-int('A')+1));
		return a;
}

// Read only region start

int findStringCode(char* input1)
{
    // Read only region end
string s=input1,str[100],temp="";
	int k=0;
	
	for(int i=0;i<s.length();i++)
		s[i]=toupper(s[i]);
	
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			str[k++]=temp;
			temp="";
		}else{
			temp+=s[i];
		}
	}
	str[k]=temp;
	string ans="";
	for(int i=0;i<=k;i++){
		ostringstream s;
		s<<convert(str[i]);
		ans+=s.str();
	}
    char *p=new char[ans.length()+1];
	strcpy(p,ans.c_str());
	return atoi(p);
}

