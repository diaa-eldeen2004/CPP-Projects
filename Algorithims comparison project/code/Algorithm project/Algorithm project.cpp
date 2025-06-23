#include <iostream>
#include <vector>
using namespace std;

// Function for Fast Exponentiation using Divide and Conquer
long long fastExponentiation(long long base, long long exponent) {
    if (exponent == 0)
        return 1;
    long long half = fastExponentiation(base, exponent / 2);
    if (exponent % 2 == 0)
        return half * half;
    else
        return base * half * half;
}

// Function to find a Peak Element using Divide and Conquer
int findPeakElement(const vector<int>& arr, int left, int right) {
    int mid = left + (right - left) / 2;

    // Check if mid is a peak
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == arr.size() - 1 || arr[mid] >= arr[mid + 1])) {
        return mid;
    }

    // If the left neighbor is greater, then the peak must be in the left half
    if (mid > 0 && arr[mid - 1] > arr[mid]) {
        return findPeakElement(arr, left, mid - 1);
    }

    // Otherwise, the peak is in the right half
    return findPeakElement(arr, mid + 1, right);
}

int main() {
    // Fast Exponentiation
    long long base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    long long result = fastExponentiation(base, exponent);
    cout << "Result (Fast Exponentiation): " << result << endl;

    // Peak Element in Array
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int peakIndex = findPeakElement(arr, 0, n - 1);
    cout << "Peak Element: " << arr[peakIndex] << " at index " << peakIndex << " ";

    return 0;
}
