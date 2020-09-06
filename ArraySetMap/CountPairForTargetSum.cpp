/**Count pairs with given sum */
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void count_Pair(vector<int> &arr1,int sum);


int main()
{
    int siz1;
    cout<<"Enter the size of First array"<<endl;
    cin>>siz1;
    cout<<"Enter the element of First array"<<endl;
    vector<int> arr1(siz1,0);
    for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
    cout<<"Enter the sum"<<endl;
    int sum=0;
    cin>>sum;
    count_Pair(arr1,sum);
}

void count_Pair(vector<int> &arr,int sum)
{
    unordered_map<int,int> m;
    int twice_count=0;
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++)
    {
        twice_count+=m[sum-arr[i]];
        if(sum-arr[i]==arr[i])
            twice_count--;
    }
    
    cout<<twice_count/2;
}