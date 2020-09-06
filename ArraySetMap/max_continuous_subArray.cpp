/**Largest sum contiguous subarray (Kadane’s Algorithm:) */
#include<vector>
#include<iostream>

using namespace std;


void kadane(vector<int> &arr);

int main()
{
    size_t size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;
    vector<int> arr(size,0);
    for(int i=0;i<arr.size();i++)
        cin>>arr[i];
    kadane(arr);
}


void kadane(vector<int> &arr)
{
    int max_ending_here=0;
    int max_so_far=0;
    for(int element:arr)
    {
        max_ending_here=max_ending_here+element;
        if(max_ending_here>max_so_far)
        {
             max_so_far = max_ending_here;
        }
        if(max_ending_here<0)
        max_ending_here=0;
    }
    cout<<max_so_far;
}