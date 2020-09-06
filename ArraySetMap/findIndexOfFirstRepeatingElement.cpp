#include<iostream>
#include<vector>
#include<unordered_set>
#include<numeric>
#include<algorithm>
using namespace std;

void firstRepeting(vector<int> &arr1);

int main()
{
    int siz1;
    cout<<"Enter the size of First array"<<endl;
    cin>>siz1;
    cout<<"Enter the element of First array"<<endl;
    vector<int> arr1(siz1,0);
    for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
    firstRepeting(arr1);
}


void firstRepeting(vector<int> &arr1)
{
    unordered_set<int> s;
    for(int element:arr1)
    {
        if(s.find(element)!=s.end())
        {
            vector<int>::iterator it = find(arr1.begin(),arr1.end(),element);
            int index = distance(arr1.begin(), it);
            cout<<"The first repeating element is"<<index;
            return;
        }
        else
        {
            s.insert(element);
        }
        
        
    }
}