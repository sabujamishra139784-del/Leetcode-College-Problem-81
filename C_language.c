/*
Name: Sabuja Mishra 
Roll no: 92500584040
Class: MCA 1(A)
*/


bool search(int* nums, int numsSize, int target) {
	int left = 0;
	int right = numsSize - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (nums[mid] == target) {
			return true;
		}

		if (nums[mid] == nums[left]) {
			left++;
			continue;
		}

		if (nums[left] <= nums[mid]) {
            // Left half is sorted
			if (nums[left] <= target && target < nums[mid]) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		} else {
            // Right half is sorted
			if (nums[mid] < target && target <= nums[right]) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}
	}

	return false;
}
