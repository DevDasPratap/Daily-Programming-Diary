#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution{
    public:
    long long sumBitDiff(int arr[], int n) 
    { 
        // Your code goes here
        long long ans=0;
        for(int i=0;i<32;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]&(1<<i))
                count++;
            }
              ans += (count * (n - count) * 2); 
        }
        return ans;
    } 
};
