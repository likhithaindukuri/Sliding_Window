class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      int sum=INT_MAX;
      int cursum=0;
      for(int i=0;i<a.size();i++)
      {
          cursum+=a[i];
          cursum=min(cursum,a[i]);
          sum=min(cursum,sum);
      }
      return sum;
  }
};