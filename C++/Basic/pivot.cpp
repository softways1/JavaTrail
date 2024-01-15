#include<bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            if(nums[mid]<nums[mid-1]&&nums[mid]<nums[mid+1]) {
                ans = mid;
                break;
            } else if(nums[mid]>nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
    int bs(vector<int>& nums, int target, int low, int high) {
        int ans = -1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            if(nums[mid] == target) {
                ans = mid;
                break;
            } else if(nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    int search(vector<int>& nums, int target) {
        int peakIndex = pivotIndex(nums);
        int index = bs(nums, target, 0, peakIndex-1);
        int index1 = bs(nums, target, peakIndex, nums.size()-1);
        if(index >= 0) {
            return index;
        } else if(index1>=0){
            return index1;
        } else{
            return -1;
        }
    }
int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << search(nums,9);
}