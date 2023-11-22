class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char,int> mp;
        int u=0,l=0,r=0,ans=0,n=s.size();
        while(r<n)
        {
            while(r<n)
            {
                if(mp[s[r]]==0)
                {
                    u++;
                }
                mp[s[r]]++;
                if(u>k)
                {
                    break;
                }
                r++;
            }
            if(u>=k)
            {
                ans=max(ans,r-l);
            }
            if(r==n)
            {
                break;
            }
            while(l<n)
            {
                if(mp[s[l]]==1)
                {
                    u--;
                }
                mp[s[l]]--;
                if(u==k)
                {
                    break;
                }
                l++;
            }
            l++;
            r++;
        }
        if(ans==0)
        {
            return -1;
        }
        return ans;
    }
};