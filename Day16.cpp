class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        if(k == 1) return "";
        stack<pair<char,int>> stk;
        for(int i = 0 ; i < s.size() ; i++){
            if(stk.empty()){
                stk.push(make_pair(s[i],1));
            } else {
                if(s[i] == stk.top().first){
                    int num = stk.top().second + 1;
                    stk.pop();
                    if(num != k){
                        stk.push(make_pair(s[i],num));
                    }
                } else {
                    stk.push(make_pair(s[i],1));
                }
            }
        }
        string ans = "";
        while(!stk.empty()){
            char c = stk.top().first;
            int num = stk.top().second;
            while(num--){
                ans += c;
            }
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


};
