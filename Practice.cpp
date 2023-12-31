#include <iostream>
using namespace std;

int main() {
    int arr[10]; // Assuming the array size is 100, you can modify this as per your requirement
    int n; // Number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input elements into the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Initialize max and min with the first element of the array
    int maxNum = arr[0];
    int minNum = arr[0];

    // Find maximum and minimum elements in the array
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxNum) {
            maxNum = arr[i]; // Update max if the current element is greater
        }
        if (arr[i] < minNum) {
            minNum = arr[i]; // Update min if the current element is smaller
        }
    }

    // Output the maximum and minimum elements
    cout << "Maximum element in the array: " << maxNum << endl;
    cout << "Minimum element in the array: " << minNum << endl;

    return 0;
}

