//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        int xorResult = 0;
    for (int i = 0; i < N; i++) {
        xorResult ^= Arr[i];
    }

    // Find the rightmost set bit
    int rightmostSetBit = xorResult & -xorResult;

    // Partition the array into two groups based on the rightmost set bit
    int group1 = 0, group2 = 0;
    for (int i = 0; i < N; i++) {
        if (Arr[i] & rightmostSetBit) {
            group1 ^= Arr[i];
        } else {
            group2 ^= Arr[i];
        }
    }

    // Ensure group1 has the larger element
    if (group1 < group2) {
        swap(group1, group2);
    }

    return {group1, group2};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends