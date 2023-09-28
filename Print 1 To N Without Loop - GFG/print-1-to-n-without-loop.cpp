//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        
        //Your code here
         if (N > 0) {
        // Recursively call the function for numbers from 1 to N-1
        printNos(N - 1);
        
        // Print the current number
        cout << N << " ";
    }
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends