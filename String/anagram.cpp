/**Write a program	to	check	whether	given two strings are anagram or not.*/
/** An anagram of a string is another string that contains same characters, only the order of characters can be different. For example,
 *  “act” and “tac” are anagram of each other. */

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter two string"<<endl;
    getline(cin,str1);
    getline(cin,str2);

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

/*can also be solved by counting the charecter */
