#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int start =0;
        int end = n-1;
        int ans = INT_MIN;
        int booksLeft = n-2;
        
        while(start<end){
                
                int mini = min(height[start],height[end]); 
                int answ = mini*booksLeft;
                
                ans = max(ans,answ);
                
                if(height[start] <= height[end]) start++;
                else end--;
                
                booksLeft--;
        }

        if(n==0 || n==1 || n==2) return 0;
        else return ans;

    }   
};
