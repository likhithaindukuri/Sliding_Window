
class Solution {
  public:
    int kadanes(vector<int> v,int n)
    {
        int mx=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(sum>mx)
            {
                mx=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return mx;
    }
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        int res=INT_MIN;
        for(int i=0;i<R;i++)
        {
            vector<int> v(C);
            for(int j=i;j<R;j++)
            {
                for(int col=0;col<C;col++)
                {
                    v[col]+=M[j][col];
                }
                int temp=kadanes(v,C);
                res=max(res,temp);
            }
        }
        return res;
    }
};