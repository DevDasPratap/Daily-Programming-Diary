class Solution{

    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int> ans(arr.size(),-1);
        stack<int> s;
        for(int i = 0 ; i < arr.size() ; i++){
            while(!s.empty() and arr[s.top()] > arr[i]){
                ans[s.top()] = arr[i];
                s.pop();
            }
            s.push(i);
        }
        return ans;
    } 
};
