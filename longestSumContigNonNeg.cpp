int maxNonNegativeSubArray(int A[], int N) 
{
     
    // Length of given array 
    int l = N;
 
    int sum = 0, i = 0; 
    int Max = -1; 
 
    // Traversing array 
    while (i < l)
    { 
         
        // Increment i counter to avoid 
        // negative elements 
        while (i < l && A[i] < 0)
        { 
            i++; 
            continue; 
        } 
 
        // Calculating sum of contiguous 
        // subarray of non-negative 
        // elements 
        while (i < l && 0 <= A[i])
        { 
            sum += A[i++]; 
 
            // Update the maximum sum 
            Max = max(Max, sum); 
        } 
 
        // Reset sum 
        sum = 0; 
    } 
 
    // Return the maximum sum 
    return Max; 
}