/**Write a program to reverse the string in	place.*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    int first=0;
    int last=str.size()-1;
    while(!(first>last))
    {
        char temp=str[first];
        str[first]=str[last];
        str[last]=temp;
        first++;
        last--;
    }
    cout<<"String after reversing is: "<<str;
}