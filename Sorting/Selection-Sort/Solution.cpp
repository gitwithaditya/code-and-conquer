#include <iostream>
#include <vector>
using namespace std;

// Selection Sort
// Time Complexity: O(n²)
// Space Complexity: O(1)

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the smallest element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // Place the smallest element at its correct position
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    selectionSort(arr);

    cout << "Sorted Array: ";
    for (int num : arr)
        cout << num << " ";

    return 0;
}
