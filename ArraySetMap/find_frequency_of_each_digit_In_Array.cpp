/**Find the frequency of each digit in an array */
#include<iostream>
#include<vector>
#include<iterator>
#include<map>
using namespace std;

int main()
{
    int siz;
    map<int,int> frequency;
    map<int ,int >::iterator itr;
    cout<<"Enter the size of array"<<endl;
    cin>>siz;
    vector<int> array(siz,0);
    cout<<"Enter the element in array";
    for(int i=0;i<array.size();i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<array.size();i++)
    {
        while(array[i]!=0)
        {
            int rem=array[i]%10;
            frequency[rem]++;
            array[i]=array[i]/10;
        }
    }
   for(itr=frequency.begin();itr!=frequency.end();itr++)
        cout<<itr->first<<"->"<<itr->second<<endl;

}
