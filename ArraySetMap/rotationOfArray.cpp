/**Cyclic rotation of an array by one */

#include<iostream>
#include<vector>
using namespace std;

void cyclic_rotation(vector<int> &arr1);

int main()
{
    int siz1;
    cout<<"Enter the size of First array"<<endl;
    cin>>siz1;
    cout<<"Enter the element of First array"<<endl;
    vector<int> arr1(siz1,0);
    for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
    cyclic_rotation(arr1);
}


void cyclic_rotation(vector<int> &arr1)
{
    int temp=arr1[arr1.size()-1];
    int i=arr1.size();
    while(i>0)
    {
        arr1[i]=arr1[i-1];
        i--;
    }
    arr1[i]=temp;
    for(int element:arr1)
        cout<<element<<"\t";
}