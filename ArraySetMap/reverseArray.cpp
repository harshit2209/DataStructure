#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int siz;
    cout<<"Enter the size of the array :";
    cin>>siz;
    vector<int> array(siz);
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    cout<<"The array before reversing"<<endl;
    for(int i=0;i<array.size();i++)
    cout<<array[i]<<"\t";
    int first=0;
    int last=array.size()-1;
    while(first<last)
    {
        if(first!=last)
        {
        int temp=array[first];
        array[first]=array[last];
        array[last]=temp;
        first++;
        last--;
        }
    }
    cout<<"\nThe array after reversing is : "<<endl;
    for(int element:array)
    cout<<element<<"\t";
}