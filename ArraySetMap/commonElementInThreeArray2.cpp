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
    int i,j,k;
    vector<int> intersection;
    while(i<arr1.size()&&j<arr2.size()&&k<arr3.size())
    {
        if(arr1[i]==arr2[j]&&arr2[j]==arr3[k])
        {
            intersection.push_back(arr1[i]);
            i++;j++;k++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr3[k])
            j++;
        else
            k++;
    }
}