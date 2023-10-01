//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int findNum(int n)
        {
        //complete the function here
         long long low = 0, high = 5 * (long long)n; // Initialize the search space

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (trailingZeroes(mid) < n) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }

    // Function to count the number of trailing zeroes in the factorial of a number
    long long trailingZeroes(long long num) {
        long long count = 0;

        for (long long i = 5; num / i >= 1; i *= 5) {
            count += num / i;
        }

        return count;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends