class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        // int count;
        // for(int i=0;i<nums.size();i++){
        //     count=0;
        //     if(nums[i]==target){
        //         count=i;
        //         break;
        //     }
        //     else count--;
        // }
        // return count;

        auto itr=find(nums.begin(),nums.end(),target);
        if(itr==nums.end()){
            return -1;
        }
        else{
            return itr-nums.begin();
        }
    }
};
