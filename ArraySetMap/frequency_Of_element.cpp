/**	 Given	an	number	n.	Find	the	number	of	occurrences	of	n	in	the	array.	 */
/**Or find the frequency of each element from Assume: 0-9 number is there in array */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int siz;
    int frequency[10]={0};
    cout<<"Enter the size of the array "<<endl;
    cin>>siz;
    vector<int> array(siz,0);
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    for(int element:array)
    frequency[element]++;
    for(int i=0;i<10;i++)
    cout<<"Frequency of "<<i<<":\t"<<frequency[i]<<endl;
}

