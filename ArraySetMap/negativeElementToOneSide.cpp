/**Move	all	the	negative elements to one side of the array. */
/**Move	all	the	negative elements to one side of the array. */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int siz;
    cout<<"Enter the size of the array "<<endl;
    cin>>siz;
    vector<int> array(siz,0);
    vector<int> result;
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    for(int element:array)
    {
        if(element<0)
        result.push_back(element);
    }
     for(int element:array)
    {
        if(element>=0)
        result.push_back(element);
    }
    cout<<"Array element is:"<<endl;
    for(int element:result)
    {
        cout<<element<<" ";
    }
}