/**From 1 to n-1 */
#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;


/**One is brute force approach using two for loop */

/**Approach 2 */

int findRepitive1(vector<int> arr)
{
    int n=arr.size();
    return accumulate(arr.begin() , arr.end() , 0)-((n - 1) * n/2);
}
int findRepitive2(vector<int> arr)
{
    unordered_set<int> s;
    for(int e:arr)
    {
        if(s.find(e)!=s.end())
        return e;
        s.insert(e);
    }
    return -1;
}
int findRepitive3(vector<int> arr)
{
    int missingElement;
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[abs(arr[i])];
        if(element<0)
        {
            missingElement=element;
            break;
        }
        arr[abs(arr[i])]=-arr[abs(arr[i])];
    }
    return abs(missingElement);
}
 int main()
 {
     int n;
     cout<<"Enter the value of n";
     cin>>n;
     vector<int> arr(n,0);
     for(int i=0;i<arr.size();i++)
     {
         cin>>arr[i];
     }
     int repeat=findRepitive1(arr);
     cout<<"Only repetitive element in an array "<<repeat<<endl;
     repeat=findRepitive2(arr);
     cout<<"Only repetitive element in an array "<<repeat<<endl;
     repeat=findRepitive3(arr);
     cout<<"Only repetitive element in an array "<<repeat<<endl;
 }
