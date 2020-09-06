#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void toggelCase(string *);
int main()
{
    string word;
    cout<<"Enter word"<<endl;
    cin>>word;
    toggelCase(&word);
    cout<<"the string after toggle is :";
    cout<<word;
}
void toggelCase(string *word)
{
    int lenth=word->size();
    cout<<lenth<<endl;
    for(int i=0;i<lenth;i++)
    {  
        if(word->at(i)>='A'&&word->at(i)<='Z')
        {
        word->at(i)=toupper(word->at(i));
        }
        else if(word->at(i)>='a'&&word->at(i)<='z')
        {
        word->at(i)=word->at(i)-32;
        }
    }
}