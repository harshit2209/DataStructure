/**Write a function that takes in a non-empty string and that returns a boolean 
 * representing whether or not string is palindrome.
 */

#include<string>
#include<vector>

using namespace std;
//O(n^2) time| O(n) space 
//logic 1
bool isPalindrome(string str)
{
    string reversString ="";
    for (int i=str.length();i>=0;i--)
    {
        reversString=reversString+str[i];
    }
    return str==reversString;
}
//logic 2
//time O(n) | space O(n)
bool isPlaindrome2(string str)
{
    vector<char> reversedChars;
    for(int i=str.length()-1;i>=0;i--)
    {
        reversedChars.push_back(str[i]);
    }
    return str==string(reversedChars.begin(),reversedChars.end());
}

//logic 3
//time O(n) | space O(n)
bool isPalindrome3(string str)
{
    int rightptr=str.length()-1;
    for(int leftptr=0;leftptr<rightptr;leftptr++)
    {
        if(str[leftptr]!=str[rightptr])
        {
            return false;
        }
        rightptr--;
    }
    return false;
}