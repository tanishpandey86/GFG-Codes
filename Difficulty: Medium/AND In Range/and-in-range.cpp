class Solution {
  public:
    int andInRange(int l, int r) {
        // code here
        int msb_l =-1;
        int msb_r = -1;
        
        for(int i = 31;i>=0;i--)
        {
            if(r&(1<<i))
            {
                if(msb_r==-1)
                msb_r = i;
                
            }
            if(l&(1<<i))
            {
                if(msb_l == -1)
                msb_l = i;
            }
        }
        
        if(msb_l != msb_r)
        return 0;
        
        
        int ans=0;
        for(int i = msb_l ;i>=0;i--)
        {
            int d = (1<<i);
            if((l&d) && (r&d) )
            {
                // cout<<(1<<i)<<endl;
                if(d>=(r-l+1))
                ans+=d;
            }
        }
        return ans;
    }
};
