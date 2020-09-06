#include<string>

using namespace std;

string convertToString(char* a, int size) 
{ 
    string s(a); 
      return s; 
} 
  
  // uses overloaded '=' operator from string class 
// to convert character array to string 
string convertToString(char* a, int size) 
{ 
    string s = a; 
    return s;
}

string convertToString(char* a, int size) 
{ 
    int i; 
    string s = ""; 
    for (i = 0; i < size; i++) { 
        s = s + a[i]; 
    } 
    return s; 
} 