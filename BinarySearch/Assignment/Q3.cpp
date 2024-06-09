#include <iostream>
using namespace std;

// Function to perform binary search to find the leftmost occurrence of 1 in a row
int findLeftmostOne(int arr[], int low, int high) {
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 1) {
            result = mid;
            high = mid - 1; // Continue searching on the left side
        } else {
            low = mid + 1; // Search on the right side
        }
    }
    return result;
}

// Function to find the row with the maximum number of 1's using binary search
int findMaxOnesRow(int arr[][4], int n, int m) {
    int max_ones_row = -1;
    int max_ones_count = -1;

    // Iterate through each row
    for (int i = 0; i < n; i++) {
        int leftmost_one_index = findLeftmostOne(arr[i], 0, m - 1);
        // If there's at least one 1 in the row
        if (leftmost_one_index != -1) {
            int ones_count = m - leftmost_one_index;
            if (ones_count > max_ones_count) {
                max_ones_count = ones_count;
                max_ones_row = i;
            }
        }
    }

    return max_ones_row;
}

int main() {
    int n = 4, m = 4;
    int arr[4][4] = {
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 1, 1}, // This row has maximum 1's
        {0, 0, 0, 0}
    };

    int max_row = findMaxOnesRow(arr, n, m);
    cout << "Row with maximum 1's: " << max_row + 1 << endl;

    return 0;
}
