//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
const int MOD = 1000000007;

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	     int n = s.length();
    vector<int> dp(n + 1, 0);

    // Empty subsequence is always present
    dp[0] = 1;

    // Map to store the last position of each character in the string
    vector<int> last(26, -1);

    for (int i = 1; i <= n; i++) {
        dp[i] = (2 * dp[i - 1]) % MOD;

        // If character has occurred before, subtract the count of subsequences
        if (last[s[i - 1] - 'a'] != -1) {
            dp[i] = (dp[i] - dp[last[s[i - 1] - 'a'] - 1] + MOD) % MOD;
        }

        // Update the last occurrence of the current character
        last[s[i - 1] - 'a'] = i;
    }

    return (dp[n] + MOD) % MOD; // Exclude the empty subsequence
}
	
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends