/**Find	Duplicate	characters	in	a	string.	 */
#include<string>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    string str;
    map<char,int> dublicate;
    map<char,int>::iterator itr;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
        dublicate[str[i]]++;
        cout<<"dublicate charecter in string are :";
    for(itr=dublicate.begin();itr!=dublicate.end();itr++)
        if(itr->second>1)
            cout<<itr->first<<" ";

}