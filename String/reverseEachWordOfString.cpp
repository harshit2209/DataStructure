/**Write a program to reverse each word in the given string. */
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string helper(string &str);
int main()
{
    string str;
    string result="";
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    int count=0;
    if(str.size()==0)
    return 0;
    string temp="";
    do
    {
       if(str[count]!=' ')
       {
           temp=temp+str[count];
           count++;
       } 
       else
       {
           temp=helper(temp);
           result=result+temp;
           count++;
           temp="";
       }
    }
    while(count<str.size());
    temp=helper(temp);
    result=result+temp;
    cout<<result;
}

string helper(string &str)
{
    reverse(str.begin(),str.end());
    str=str+" ";
    return str;
}