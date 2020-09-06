/**	 Find	the	range	of	the	array.	Range	means	the	difference	between	the	
maximum	and	minimum	element	in	the	array.	
 */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int siz;
    cout<<"Enter the size of the array"<<endl;
    cin>>siz;
    vector<int> array(siz,0);
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<siz;i++)
    cin>>array[i];
    int min=INT_MAX;
    int max=INT_MIN;
    for(int element:array)
    {
        if(element<min)
        min=element;
        if(element>max)
        max=element;
    }
    cout<<"Range of the array is: "<<max-min;
}