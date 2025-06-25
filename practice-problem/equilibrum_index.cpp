#include <iostream>
#include <vector>

using namespace std;

int findEquilibriumIndex(const vector<int>& nums, int n) {
    int total_sum = 0;
    int left_sum = 0;
    
    // Calculate total sum of all elements
    for (int num : nums) {
        total_sum += num;
    }
    
    for (int i = 0; i < n; ++i) {
        // Right sum is total_sum - left_sum - current element
        int right_sum = total_sum - left_sum - nums[i];
        
        if (left_sum == right_sum) {
            return i;
        }
        
        left_sum += nums[i];
    }
    
    return -1; // No equilibrium index found
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int equilibriumIndex = findEquilibriumIndex(nums, n);
    cout << equilibriumIndex << endl;
    
    return 0;
}

//Total Time Complexity = O(n)

// i	nums[i]	 left_sum	right_sum = total_sum - left_sum - nums[i]	Match?
// 0	-7	      0	             0 - 0 - (-7) = 7	                    ❌
// 1	 1	     -7	             0 - (-7) - 1 = 6	                    ❌
// 2	 5	     -6	             0 - (-6) - 5 = 1	                    ❌
// 3	 2	     -1	             0 - (-1) - 2 = -1	                    ✅ ✅ ✅
// 4	-4	      1	             0 - 1 - (-4) = 3	                    ❌
// ✔️ ইনডেক্স 3-এ পাওয়া গেলো left_sum = -1 এবং right_sum = -1 → তাই index 3 হলো equilibrium index।