class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        long long maxi = LONG_MIN; 
    long long sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
        
    }
};