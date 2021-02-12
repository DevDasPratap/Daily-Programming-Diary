#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
public:
	bool recreationalSpot(int arr[], int n)
	{
		if (std::is_sorted(arr, arr + (n)))
		{
		    return false;
		}
		for (int i = 0; i<n ;i++)
		{
		    int num = arr[i];
		    stack<int> stk;
		    for(int j = i+1; j<n; j++)
		    {
		        if(stk.empty() && arr[j] > num)
		        {
		            stk.push(arr[j]);
		        }
		        else if(!stk.empty() && arr[j] < stk.top() && arr[j] > num)
		        {
		            return true;
		        }
		        else if(!stk.empty() && arr[j] > stk.top())
		        {
		            stk.pop();
		            stk.push(arr[j]);
		        }
		    }

		}
		return false;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution ob;
		if(ob.recreationalSpot(arr, n))
		    cout<<"True"<<endl;
		else
		    cout<<"False"<<endl;
	}
	return 0;
}  // } Driver Code Ends
