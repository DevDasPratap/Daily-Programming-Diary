class Solution{
    public:
    string compress(string s)
    {
      
      int n=s.length();
        vector<int>lps(n,0);
        int i=0,j=1;
        while(j<n)
        {
            if(s[i]==s[j])
            {
                lps[j]=i+1;
                j++;
                i++;

            }
            else
            {
                if(i==0 && s[i]!=s[j])
                {
                    lps[j]=0;
                    j++;
                }
                else 
                i=lps[i-1];
            }
        }

        string res;
        for(int i = n-1 ; i>= 0 ; i--)
        {
            if(i%2)
            {
                if(lps[i] >= (i+1) / 2 && (i+1) % (2*(i+1 - lps[i])) == 0)
                {
                    res.push_back('*');
                    i = i / 2;
                    i++;
                }
                else
                {
                    res.push_back(s[i]);
                }
            }
            else
            {
                res.push_back(s[i]);
            }

        }

        reverse(res.begin(), res.end());
        return res;
    
    }
};
