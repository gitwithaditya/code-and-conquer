// Selection Sort
// Time Complexity: O(n²)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int minIndex=i;
            for(int j=i;j<n;j++){
                if(nums[minIndex]>nums[j]){
                    minIndex=j;
                }
            }
            swap(nums[i] ,nums[minIndex]);
        }
        return nums;
    }
};
