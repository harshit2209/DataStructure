#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void find_Union(vector<int> &arr1,vector<int> &arr2);


int main()
{
    int siz1,siz2;
    cout<<"Enter the size of First array"<<endl;
    cin>>siz1;
    cout<<"Enter the element of First array"<<endl;
    vector<int> arr1(siz1,0);
    for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
    cout<<"Enter the size of Second array"<<endl;
    cin>>siz2;
    vector<int> arr2(siz2,0);
    for(int i=0;i<arr2.size();i++)
    cin>>arr2[i];
    find_Union(arr1,arr2);
}

void find_Union(vector<int> &arr1,vector<int> &arr2)
{
    unordered_set<int> result_union;
    unordered_set<int> result_intersection;
    for(int element:arr1)
    result_union.insert(element);
    for(int element:arr2)
    {
        if(result_union.find(element)!=result_union.end())
         result_intersection.insert(element);
        else
         result_union.insert(element);   
    }
    cout<<"Result Union:";
    for(int element:result_union)
        cout<<element<<"\t";
    cout<<endl<<"Result Intersection:";
    for(int element:result_intersection)
        cout<<element<<"\t";
}

