//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string result = "";
    
    while (n > 0) {
        long long remainder = n % 26;
        
        if (remainder == 0) {
            result = 'Z' + result;
            n = n / 26 - 1;
        } else {
            result = char('A' + remainder - 1) + result;
            n = n / 26;
        }
    }
    
    return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends