/**Split a vector into a sub vector of a given size by user */
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void splitVector(vector<int> &array,int splitSize,int numberOfSubVector);
int main()
{
    int arraySize,numberOfSubVector,splitSize;
    cout<<"Enter the size of an array"<<endl;
    cin>>arraySize;
    vector<int> array(arraySize,0);
    cout<<"Enter the element of the vector"<<endl;
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    cout<<"Enter the size of vector to be split:"<<endl;
    cin>>splitSize;
    numberOfSubVector=ceil((float)array.size()/splitSize);
    splitVector(array,splitSize,numberOfSubVector);
}

void splitVector(vector<int> &array,int splitSize,int numberOfSubVector)
{
    vector<int> subArray[numberOfSubVector];
    for(int k=0;k<numberOfSubVector;k++)
    {
        auto start_itr=next(array.cbegin(),k*splitSize);
        auto end_itr=next(array.cbegin(),k*splitSize+splitSize);
        subArray[k].resize(splitSize);
        if(k*splitSize+splitSize>array.size())
        {
            end_itr=array.cend();
             subArray[k].resize(array.size()-k*splitSize);
        }
        copy(start_itr,end_itr,subArray[k].begin());
    }
    for(int i=0;i<numberOfSubVector;i++)
    {
        for(auto i:subArray[i])
        cout<<i<<" ";
        cout<<endl;
    }
}