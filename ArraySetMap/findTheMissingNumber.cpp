#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

void missingElement(vector<int> &arr1);

int main()
{
    int siz1;
    cout<<"Enter the size of First array"<<endl;
    cin>>siz1;
    cout<<"Enter the element of First array"<<endl;
    vector<int> arr1(siz1,0);
    for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
    missingElement(arr1);
}

void missingElement(vector<int> &arr)
{
    int arrSum=((arr.size()+1)*(arr.size()+1+1));
    arrSum=arrSum/2;
    int sum=accumulate(arr.begin(),arr.end(),0);
    cout<<"Missing Element"<<(arrSum-sum)<<endl;

}