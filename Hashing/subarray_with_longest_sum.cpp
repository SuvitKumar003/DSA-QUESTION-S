#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;
//unordered map is used to store the prefix sum and the index of the prefix sum as it can ease the process of finding the subarray with the given sum and also the index of the prefix sum is stored so that we can find the length of the subarray with the given sum prefix sum is used as the key and the index of the prefix sum is used as the value
int longest_subarray_with_given_sum(vector<int> arr, int sum) {
    unordered_map<int, int> prefix_map;
    int max_length = 0;
    int prefix_sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefix_sum += arr[i];

        // Check if the prefix sum equals the target sum
        if (prefix_sum == sum) {
            max_length = i + 1;
            //This has been done so that if there exist any subarray starting from the index zero and the sum equals to the given sum then we can return the length of the subarray since any array starting from the index zero will have the length equal to the index+1 and it will be the maximum length of the subarray
        }

        // If (prefix_sum - sum) exists in map, we found a subarray with the given sum
        if (prefix_map.find(prefix_sum - sum) != prefix_map.end()) {
            int length = i - prefix_map[prefix_sum - sum];
            max_length = max(max_length, length);
        }

        // Only insert prefix_sum if it is not present to maintain the smallest index
        if (prefix_map.find(prefix_sum) == prefix_map.end()) {
            prefix_map[prefix_sum] = i;
        }
    }
    return max_length;
}

int main() {
    vector<int> arr = {5, 8, -4, -4, 9, -2, 2};
    int result = longest_subarray_with_given_sum(arr, 0);

    if (result > 0) {
        cout << "The longest subarray is " << result << endl;
    } else {
        cout << "The subarray does not exist" << endl;
    }

    return 0;
}
