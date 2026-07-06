class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //APPROACH 1
        // int n=nums.size();
        // vector<int> temp;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0){
        //         temp.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     nums[i]=temp[i];
        // }

        //APPROACH 2
        int n=nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
           if(nums[i]==0){
                j=i;
                break;
            }
        }
        for(int i=j+1;i<n;i++){
            if(j==-1) return;
            else if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
