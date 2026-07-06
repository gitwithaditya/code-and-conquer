class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        int j=0;
        while(j<n-1){
            swap(nums[j],nums[i]);
            i++;
            j++;
        }
    }
};
