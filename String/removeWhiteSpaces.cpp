/**Write	a	program	to	remove	all	whitespaces	in	a	given	string.	 */
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string removeSpaces(string str);
int main()
{
    //char str[100];
    string str;
    cout<<"Entre the string"<<endl;
    getline(cin,str);
    //cin.getline(str,100);
    int count=0;
    //for(int counter=0;str[counter];counter++)
    for(int counter=0;counter<str.size();counter++)
        if(str[counter]!=' ')
            str[count++]=str[counter];

  str.resize(count);
  cout<<"String After removing space is: "<<str<<endl;

  //using different logic
  string str2="geeks    fo   r     gee    ks    ";
  str2= removeSpaces(str2);
  cout<<"String After removing space is: "<<str2<<endl;
}


  
// Function to remove all spaces from a given string 
string removeSpaces(string str)  
{ 
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
    return str; 
} 