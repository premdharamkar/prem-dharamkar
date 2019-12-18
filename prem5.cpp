#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check if sum of the 
// three angles is 180 or not 
bool Valid(int a, int b, int c) 
{ 
    // Check condition 
    if (a + b + c == 180) 
        return true; 
    else
        return false; 
} 
  
// Driver code 
int main() 
{ 
    int a = 60, b = 40, c = 80; 
  
    if (Valid(a, b, c)) 
        cout << "Valid"; 
    else
        cout << "Invalid"; 
} 
