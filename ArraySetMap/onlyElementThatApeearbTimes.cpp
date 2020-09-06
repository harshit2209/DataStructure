/**
 * Find the only element that appears b times
 *  Given an array where every element occurs a times, except one element which occurs b (a>b) times. 
 * Find the element that occurs b times.
 */

#include<bits/stdc++.h> 
using namespace std;

int findElementAppearbtime(vector<int> arr,int b)
{
    unordered_map<int,int> m;
    int repeat;
    for(int e:arr)
        m[e]++;
    unordered_map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second==b)
        {
            repeat= itr->first;
        }   
    }
    return repeat;
}
int appearsbTimes(vector<int> arr, int n, int a, int b) 
{ 
    unordered_set<int> s; 
  
    int a_sum = 0, sum = 0; 
  
    for (int i = 0; i < n; i++) { 
        if (s.find(arr[i]) == s.end()) { 
            s.insert(arr[i]); 
            a_sum += arr[i]; 
        } 
  
        sum += arr[i]; 
    } 
  
    a_sum = a * a_sum; 
  
    return ((a_sum - sum) / (a - b)); 
} 

int main()
{
    int n;
    cout<<"Enter the number of element"<<endl;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int a=2,b=3;
    int result=findElementAppearbtime(arr,b);
    cout<<"The element that appear "<<b<<" times"<<result;
     result=appearsbTimes(arr,n,a,b);
    cout<<"The element that appear "<<b<<" times"<<result;
}



