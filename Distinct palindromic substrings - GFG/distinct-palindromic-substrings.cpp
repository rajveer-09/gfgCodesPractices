//{ Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int palindromeSubStrs(string s) {
        // code here
        int n = s.length();
        set<string> palindromes;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                // Check if s[i..j] is a palindrome
                bool isPalindrome = true;
                for (int start = i, end = j; start < end; start++, end--) {
                    if (s[start] != s[end]) {
                        isPalindrome = false;
                        break;
                    }
                }

                if (isPalindrome) {
                    palindromes.insert(s.substr(i, j - i + 1));
                }
            }
        }

        return palindromes.size();
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}

// } Driver Code Ends