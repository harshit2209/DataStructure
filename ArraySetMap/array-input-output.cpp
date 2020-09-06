#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> array(10,0);
    int n;
    cout<<"Input your array Element"<<endl;
    for(int i=0;i<10;i++)
    {
    cin>>array[i];
    }
    for(int ele:array)
    cout<<ele<<"\t";

}