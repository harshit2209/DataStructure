/**Given an array arr[], find a Noble integer in it. An integer x is said to be Noble in arr[]
 *  if the number of integers greater than x is equal to x. 
 * If there are many Noble integers, return any of them. If there is no, then return -1. */

/**Noble integers in an array (count of greater elements is equal to value) */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int>  nobleInteger(vector<int>);

vector<int> nobleInteger(vector<int> arr)
{
    vector<int> nobal;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==(arr.size()-1-i))
        nobal.push_back(arr[i]);

    }
    return nobal;
}


int main()
{
    vector<int> arr={10, 3, 20, 40, 2}; 
    vector<int> nobal= nobleInteger(arr); 
    if(nobal.size()!=0)
    {
        for(int e:nobal)
            cout << "The noble integer is " << e; 
    }
    else
    {
        cout << "No Noble Integer Found";
    }
}