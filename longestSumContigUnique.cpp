int maxSumSubarray(int arr[], int n)
{
    int result = 0;
 
    for (int i = 0; i < n; i++) {
        int sum = 0;
 
        // For keep track of duplicate elements in current
        // subarray
        unordered_map<int, int> unmap;
         
        for (int j = i; j < n; j++) {
            unmap[arr[j]]++;
            sum += arr[j];
 
            // Check if current subarray contains any
            // duplicate
            if (unmap.size() == (j - i + 1)) {
                result = max(result, sum);
            }
            else {
                break;
            }
        }
    }
    return result;
}