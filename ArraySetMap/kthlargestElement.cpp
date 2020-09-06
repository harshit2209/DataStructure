/**Find	the	Kth	largest	and	Kth	smallest number	in	an	array.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int siz=0;
    int k=-1;
    cout<<"Enter the size of array"<<" ";
    cin>>siz;
    vector<int> array(siz,0);
    cout<<"Enter the array element"<<" ";
    for(int i=0;i<siz;i++)
    cin>>array[i];
    cout<<"Enter the value of K"<<" ";
    cin>>k;
    if(k>siz)
    cout<<"K valye exceeds size of array";
    sort(array.begin(),array.end());
    cout<<"Array element in sorted form are"<<endl;
    for(int element:array)
    cout<<element<<" ";
    cout<<"\nkth smallest element :"<<array[k-1]<<endl;
    cout<<"kth largest element :"<<array[siz-k];

}