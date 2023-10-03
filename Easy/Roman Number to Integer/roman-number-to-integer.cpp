//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
         unordered_map<char, int> roman_values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        // Initialize result
        int result = 0;

        // Iterate through the string from left to right
        for (int i = 0; i < str.length(); ++i) {
            // If the current numeral is smaller than the next numeral, subtract its value
            if (i < str.length() - 1 && roman_values[str[i]] < roman_values[str[i + 1]]) {
                result -= roman_values[str[i]];
            } else {
                result += roman_values[str[i]];
            }
        }

        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends