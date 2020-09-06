
// CPP program to convert string 
// to char array 
#include <iostream>
#include<string> 
  
using namespace std; 
  
// driver code 
int approach1() 
{ 
    // assigning value to string s 
    string s = "geeksforgeeks"; 
  
    int n = s.length(); 
  
    // declaring character array 
    char char_array[n + 1]; 
  
    // copying the contents of the 
    // string to char array 
    strcpy(char_array, s.c_str()); 
  
    for (int i = 0; i < n; i++) 
        cout << char_array[i]; 
  
    return 0; 
}

//Approach 2


// CPP program to convert string 
// to char array 

  
// driver code 
int approach2() 
{ 
    // assigning value to string s 
    string s("geeksforgeeks"); 
    // declaring character array : p 
    char p[s.length()]; 
  
    int i; 
    for (i = 0; i < sizeof(p); i++) { 
        p[i] = s[i]; 
        cout << p[i]; 
    } 
    return 0; 
} 

