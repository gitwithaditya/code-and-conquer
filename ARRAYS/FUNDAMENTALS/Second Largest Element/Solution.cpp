class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        if(nums.size()<2){return -1;}
        int max=INT_MIN;
        int smax=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                smax=max;
                max=nums[i];
            }
            else if(nums[i]>smax && nums[i]!=max){
                smax=nums[i];
            }
        }
        return smax==INT_MIN ?-1:smax;


      
    }
};
