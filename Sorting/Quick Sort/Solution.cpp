class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {
        int randomIndex = low + rand() % (high - low + 1);
        swap(arr[low], arr[randomIndex]);

        int pivot = arr[low];
        int i = low, j = high;

        while (i < j) {
            while (i <= high - 1 && arr[i] <= pivot)
                i++;

            while (j >= low + 1 && arr[j] > pivot)
                j--;

            if (i < j)
                swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);
        return j;
    }

    void helper(vector<int>& arr, int low, int high) {
        if (low >= high)
            return;

        int p = partition(arr, low, high);

        helper(arr, low, p - 1);
        helper(arr, p + 1, high);
    }

    vector<int> quickSort(vector<int>& nums) {
        helper(nums, 0, nums.size() - 1);
        return nums;
    }
};
