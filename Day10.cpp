int repeatedStringMatch(string a, string b)
{
   string p=a;
        int i=1;
        while(i<=(b.length()/a.length())+2)   
        {
            if(p.find(b)!=-1)
            {
                break;
            }
            else 
                p+=a;
            i++;    
        }
        return (p.find(b)!=-1)?i:-1;
}
