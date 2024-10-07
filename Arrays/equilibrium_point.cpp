vector<long long> arrsum;
    
    void sum_arr(const vector<long long>& arr, int n) {
        long long sum = 0;
        arrsum.resize(n);
        for (int i = 0; i < n; ++i) {
            sum += arr[i];
            arrsum[i] = sum;
        }
    }
    int equilibriumPoint(vector<long long>& arr) {
        int n = arr.size();
        if (n == 1) {
            return 1; // The only element is the equilibrium point
        }

        sum_arr(arr, n);

        for (int i = 0; i < n; ++i) {
            long long left_sum = (i == 0) ? 0 : arrsum[i - 1];
            long long right_sum = arrsum[n - 1] - arrsum[i];
            
            if (left_sum == right_sum) {
                return i + 1; // Returning the 1-based index
            }
        }

        return -1; // No equilibrium point found
    }