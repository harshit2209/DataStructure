/**
 * 	longest	consecutive	subsequence.
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void longestConsecutiveSubsequence(vector<int> &arr);


void longestConsecutiveSubsequence(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    int latestlcs=1;
    int lcs=1;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]+1==arr[i+1])
        {
            latestlcs++;
        }else
        {
            lcs=max(lcs,latestlcs);
            latestlcs=1;
        } 
        lcs=max(lcs,latestlcs);  
    }
    cout<<"The lcs is:"<<lcs;

}



int main()
{
     size_t size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;
    vector<int> arr(size,0);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    longestConsecutiveSubsequence(arr);
}