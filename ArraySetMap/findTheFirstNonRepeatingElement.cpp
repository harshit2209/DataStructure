#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<numeric>
#include<algorithm>
using namespace std;

void firstNonRepeting(vector<int> &arr1);

int main()
{
    int siz1;
    cout<<"Enter the size of First array"<<endl;
    cin>>siz1;
    cout<<"Enter the element of First array"<<endl;
    vector<int> arr1(siz1,0);
    for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
    firstNonRepeting(arr1);
}

void firstNonRepeting(vector<int> &arr1)
{
    unordered_map<int,int> m;
    for(int element:arr1)
        m[element]++;
    for(auto x:m)
    {
        if(x.second==1)
        {
            cout<<x.first;
            break;
        }
    }
}