#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

void findIntersection(vector<int>,vector<int>,vector<int>);

int main()
{
    size_t siz1,siz2,siz3;
    cout<<"Enter the size of First array"<<endl;
    cin>>siz1;
    cout<<"Enter the element of First array"<<endl;
    vector<int> arr1(siz1,0);
    for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
    cout<<"Enter the size of Second array"<<endl;
    cin>>siz2;
    vector<int> arr2(siz2,0);
    cout<<"Enter the element of second array"<<endl;
    for(int i=0;i<arr2.size();i++)
    cin>>arr2[i];
    cout<<"Enter the size of Third array"<<endl;
    cin>>siz3;
    vector<int> arr3(siz3,0);
    cout<<"Enter the element of Third array"<<endl;
    for(int i=0;i<arr3.size();i++)
    cin>>arr3[i];
    findIntersection(arr1,arr2,arr3);
}

void findIntersection(vector<int> arr1,vector<int> arr2,vector<int> arr3)
{
    unordered_set<int> set1;
    unordered_set<int> set2;
    unordered_set<int> set3;
    vector<int> intersection;
    for(int element:arr1)
    set1.insert(element);
    for(int element:arr2)
    if(set1.find(element)!=set1.end())
    set2.insert(element);
    for(int element:arr3)
    if(set2.find(element)!=set3.end())
    set3.insert(element);
    for(int element:set3)
    cout<<element<<"\t";
}