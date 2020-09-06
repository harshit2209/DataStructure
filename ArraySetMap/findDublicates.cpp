/**Find all the array that occurs more than once in an array */

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> findDublicates(vector<int> arr);


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
    vector<int> dub=findDublicates(arr);
    for(int element:dub)
    cout<<element<<"\t";
}

vector<int> findDublicates(vector<int> arr)
{
    unordered_map<int,int> m;
    vector<int> dub;
    for(int element:arr)
        m[element]++;
    unordered_map<int,int>::iterator ptr;
    for(ptr=m.begin();ptr!=m.end();ptr++)
        if(ptr->second>1)
            dub.push_back(ptr->first);
    return dub;
}