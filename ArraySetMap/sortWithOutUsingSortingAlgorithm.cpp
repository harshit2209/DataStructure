/**Given	an	array	which	consists	of	only	0,	1	and	2.	Sort	the	array	without	
using	any	sorting	algorithm.	 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int siz;
    cout<<"Enter the size of array"<<endl;
    cin>>siz;
    int element[3]={0};
    vector<int> array(siz,0);
    cout<<"Enter the element of array 0 1 2"<<endl;
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    for(int ele:array)
    element[ele]++;
    int counter=0;
    for(int i=0;i<sizeof(element)/sizeof(int);i++)
    {
        int c=0;
        while(c<element[i])
        {
        array[counter]=i;
        c++;
        counter++;
        }
    }
    for(int ele:array)
    cout<<ele<<" ";
}