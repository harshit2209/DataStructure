/**
 * Given an array a[] of N positive and negative numbers.
 * Find if there is a subarray (of size at-least one) with 0 sum.
 * subArraywithAtleastSizeOnewithSumZero
 * 
 */

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool findSubArraySumToZero(vector<int> &);

int main()
{
    size_t siz;
    cout<<"Enjter the size of an array"<<endl;
    cin>>siz;
    vector<int> arr(0,siz);
    for(int i=0;i<arr.size();i++)
    cin>>arr[i];
    cout<<findSubArraySumToZero(arr);
}

bool findSubArraySumToZero(vector<int> &arr)
{
    unordered_set<int> sub_set;
    int sum=0;
    for(int i:arr)
    {
        sum+=i;
    if(sum==0||sub_set.find(sum)!=sub_set.end())
    return true;
    sub_set.insert(sum);
    }
    return false;
}