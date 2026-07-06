class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        //BRUTE APPROACH->
    //     int n=nums.size();
    //     for(int i=1;i<=k%n;i++){
    //         rotate(nums,n);
    //     }
    // }

    // void rotate(vector<int>& nums,int n){
    //     int i=1;
    //     int j=0;
    //     while(j<n-1){
    //         swap(nums[j],nums[i]);
    //         i++;
    //         j++;
    //     }

    //OPTIMAL APPROACH->
    int n=nums.size();
    k=k%n;
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
    reverse(nums,0,n-1);
    }

    void reverse(vector<int>&nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
};
