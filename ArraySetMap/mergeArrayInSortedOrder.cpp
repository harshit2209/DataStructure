/**Write a program to merge two array in sorted order */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    
    unsigned int size1,size2;
    cout<<"Enter the size of array1 and array2"<<endl;
    cin>>size1>>size2;
    vector<int> array1(size1,0),array2(size2,0);
    cout<<"Enter the element in array 1"<<endl;
    for(int i=0;i<array1.size();i++)
    cin>>array1[i];
     cout<<"Enter the element in array 2"<<endl;
    for(int i=0;i<array2.size();i++)
    {
        int a;
        cin>>a;
        array1.push_back(a);
    }
    sort(array1.begin(),array1.end(),greater<int>());
    for(int element:array1)
    {
        cout<<element<<" ";
    }
}