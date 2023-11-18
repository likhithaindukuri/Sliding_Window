class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0,sum=0;
        unordered_set<int> ht;
        int i=0,j=0,n=nums.size();
        while(i<n-k+1)
        {
            if(j-i==k)
            {
                ans=max(ans,sum);
                sum-=nums[i];
                ht.erase(nums[i++]);
            }
            else if(!ht.count(nums[j]))
            {
                sum+=nums[j];
                ht.insert(nums[j++]);
            }
            else
            {
                sum-=nums[i];
                ht.erase(nums[i++]);
            }
        }
        return ans;
    }
};