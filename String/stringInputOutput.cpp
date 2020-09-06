#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input;
    cout<<"Enter the string"<<endl;
    getline(cin,input);
    //cin.ignore();
    cout<<"Your String is :";
    cout<<input;
}