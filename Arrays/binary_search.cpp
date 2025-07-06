#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;
int binarysearch(vector<int> arr, int tar) {
    int st = 0, end = arr.size() - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid]) {
            st = mid + 1;
        } else if (tar < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr1 = {2, 5, 1, 8, 4, 3, 7, 6, 9, 11};
    int tar1 = 6;
    // Binary search works only on sorted array
    sort(arr1.begin(), arr1.end());
    int index1 = binarysearch(arr1, tar1);
    if (index1 != -1) {
        cout << "Target " << tar1 << " found at index: " << index1 << endl;
    } else {
        cout << "Target " << tar1 << " not found." << endl;
    }

    // Example 2: Another array
    vector<int> arr2 = {7, 4, 8, 2, 6, 5, 1, 3};
    int tar2 = 8;

    sort(arr2.begin(), arr2.end());
    int index2 = binarysearch(arr2, tar2);

    if (index2 != -1) {
        cout << "Target " << tar2 << " found at index: " << index2 << endl;
    } else {
        cout << "Target " << tar2 << " not found." << endl;
    }

    return 0;
}
