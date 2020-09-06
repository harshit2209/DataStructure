/**k-th missing element in an unsorted array */

/**Algorithm:
 * step1: insert all the element in unsorted_set
 * step2: find the maximum and minimun in the set
 * step3: Iterate from maximum to minimum in the set
 * setp4: find the element in a set.
 * step5: If element is found than move next else increase count
 * step6: If count is kth than return loop index.
 */

#include<vector>
#include<iostream>
#include<unordered_set>
#include<algorithm>

using namespace std;
int  missingElement(vector<int> arr1,int k);
int main()
{
//    int siz;
//    cout<<"Enter the size of the array"<<endl;
//    cin>>siz;
//    cout<<"Enter the element in array"<<endl;
//    vector<int> arr(siz,0);
//    for(int i=0;i<arr.size();i++)
//    cin>>arr[i];
//    cout<<"Enter the value of k"<<endl;
    vector<int> arr{1,5,9,8,12};
   int k=6;
   //cin>>k;
   cout<<"The missing element is"<<missingElement(arr,k);
}

int missingElement(vector<int> arr,int k)
{
    unordered_set<int> missing;
    for(int i=0;i<arr.size();i++)
    missing.insert(arr[i]);
    int count=0;
    int max=*max_element(arr.begin(),arr.end());
    int min=*min_element(arr.begin(),arr.end());

    for(int i=min+1;i<max;i++)
    {
    if(missing.find(i)==missing.end())
    count++;
        
    if(count==k)
        return i;
    }
    return -1;
}