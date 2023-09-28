//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
     bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i=2;i<num;i++){
            if(num%i==0){
        
         return false;}
        }
        
        return true;
    }
	int fullPrime(int N){
	    
	    //code here
	    if (!isPrime(N)) {
            return 0; // N is not a prime number
        }
        
        int temp = N;
        while (temp > 0) {
            int digit = temp % 10;
            if (!isPrime(digit)) {
                return 0; // A digit of N is not prime
            }
            temp /= 10;
        }
        
        return 1; // N is a full prime
    }
	   
};


//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends