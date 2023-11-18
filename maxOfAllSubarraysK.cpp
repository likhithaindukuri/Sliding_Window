class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *a, int n, int k)
    {
        vector<int> ans;
        deque<int>dq;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty()&&a[dq.back()]<=a[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(int i=k;i<n;i++)
        {
            ans.push_back(a[dq.front()]);
            while(!dq.empty()&&dq.front()<=(i-k))
            {
                dq.pop_front();
            }
            while(!dq.empty()&&a[dq.back()]<=a[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(a[dq.front()]);
        return ans;
    }
};