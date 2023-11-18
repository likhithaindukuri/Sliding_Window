vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
     vector<long long> result;
    deque<long long> negativeIndices;
    for (long long i = 0; i < K; i++) {
        if (A[i] < 0) {
            negativeIndices.push_back(i);
        }
    }
    for (long long i = K; i < N; i++) {
        if (!negativeIndices.empty()) {
            result.push_back(A[negativeIndices.front()]);
        } else {
            result.push_back(0); 
        }
        while (!negativeIndices.empty() && negativeIndices.front() <= i - K) {
            negativeIndices.pop_front();
        }
        if (A[i] < 0) {
            negativeIndices.push_back(i);
        }
    }
    if (!negativeIndices.empty()) {
        result.push_back(A[negativeIndices.front()]);
    } else {
        result.push_back(0);
    }

    return result;                                             
 }