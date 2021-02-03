int m=A.length();
    	int n=B.length();
    	if(m!=n)
    	return -1;
    	int count[256];
    	memset(count,0,sizeof(count));
    	for(int i=0;i<m;i++)
    	{
    	    count[A[i]]++;
    	}
    	for(int j=0;j<n;j++)
    	count[B[j]]--;
    	for(int i=0;i<256;i++)
    	{
    	    if(count[i]!=0)
    	    return -1;
    	}
    	int result=0;
    	for(int i=m-1,j=n-1;i>=0;)
    	{
    	    while(i>=0 && A[i]!=B[j])
    	    {
    	     i--;
    	     result++;
    	    }
    	    if(i>=0)
    	    {
    	        i--;
    	        j--;
    	    }
    	}
    	return result;
    }
};
