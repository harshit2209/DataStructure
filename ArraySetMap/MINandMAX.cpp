/**Linear Search*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Finding the size of array:int n = sizeof(arr) / sizeof(arr[0]); 
    int m;
    cout<<"Enter the size of array :";
    cin>>m;
    vector<int> array(m);
    cout<<"Enter the element :";
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    int min=INT_MAX;
    int max=INT_MIN;
    for(int element:array)
    {
        if(element<min)
        min=element;
        if(element>max)
        max=element;
    }
    cout<<"MINIMUM :"<<min<<endl;
    cout<<"MAXIMUM :"<<max<<endl;

}