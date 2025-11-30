//NAME: SABUJA MISHRA
//ROLL NO: 92500584040
//CLASS: MCA 1(A)


class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;  // Calculate middle index to avoid overflow

            // Case 1: Left half is sorted (pivot is in right half)
            if (nums[mid] > nums[right]) {
                // Check if target is in the sorted left half
                if (nums[left] <= target && target <= nums[mid]) {
                    right = mid;  // Search in left half
                } else {
                    left = mid + 1;  // Search in right half
                }
            }
            // Case 2: Right half is sorted (pivot is in left half)
            else if (nums[mid] < nums[right]) {
                // Check if target is in the sorted right half
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;  // Search in right half
                } else {
                    right = mid;  // Search in left half
                }
            }
            // Case 3: Cannot determine which half is sorted due to duplicates
            else {
                // nums[mid] == nums[right], reduce search space by one
                --right;
            }
        }

        // Check if the remaining element is the target
        return nums[left] == target;
    }
};
