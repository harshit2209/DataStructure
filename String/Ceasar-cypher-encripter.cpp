/**Given a non empty string in a lower case and a non negative integer value representing a key,write a function 
 * that returns a new stirng obtained by shifting  every letter in the input string by k position in the alphabet,
 * Note that letter should "Wrap" around the alphabet,in other words letter shifted by one letter return a.
 * Sample Input : "xyz",2
 * Sample Output : "zab"
 */
#include<string>
#include<vector>
#include<iostream>

using namespace std;
int main()
{
    string a="abc";
    int key=2;
    cout<<ceasarCypherEncripter(a,key);
}

string ceasarCypherEncripter(string str,int key)
{
    vector<char> newLetter;
    int newkey=key%26;
    for(int i=0;i<str.length();i++)
    {
        newLetter.push_back(getNewLetter(str[i],newkey));
    }
    return string(newLetter.begin(),newLetter.end());
}
char getNewLetter(char letter,int key)
{
    int newLetterCode=letter+key;
    return newLetterCode<=122?newLetterCode:96+newLetterCode%122;
}