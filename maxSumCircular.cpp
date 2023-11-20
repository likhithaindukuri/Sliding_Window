class Solution {
public:
    int maxsumsubarray(vector<int>& nums)
    {
        int currentsum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            currentsum+=nums[i];
            maxsum=max(maxsum,currentsum);
            if(currentsum<0)
            {
                currentsum=0;
            }
        }
        return maxsum;
    }
    int minsumsubarray(vector<int>& nums)
    {
        int currentsum=0;
        int minsum=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            currentsum+=nums[i];
            minsum=min(minsum,currentsum);
            if(currentsum>0)
            {
                currentsum=0;
            }
        }
        return minsum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        int x=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                x=0;
                break;
            }
            ans=max(ans,nums[i]);
        }
        if(x)
        {
            return ans;
        }
        int ans1=maxsumsubarray(nums);
        cout<<ans1<<" ";
        int arraysum=0;
        for(int i=0;i<nums.size();i++)
        {
            arraysum+=nums[i];
        }
        int ans2=arraysum-minsumsubarray(nums);
        cout<<ans2<<" ";
        return max(ans1,ans2);
    }
};