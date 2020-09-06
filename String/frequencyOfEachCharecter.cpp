/**Write	a	program	to	count	the	number	of	occurrences	of	each	character	
in	the	string	and	print	it.	 */

#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    string str;
    map<char,int> frequency;
    map<char , int >::iterator itr;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
     for(long counter=0;counter<str.size();counter++)
         frequency[str[counter]]++;
     for(itr=frequency.begin();itr!=frequency.end();itr++)
        cout<<itr->first<<"->"<<itr->second<<endl;
}
