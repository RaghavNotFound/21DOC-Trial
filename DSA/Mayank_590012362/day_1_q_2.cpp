#include <iostream>
#include <vector>
using namespace std;

// Function to find the maximum element in an array
int findMax(const vector<int>& arr) {
    int maxVal = arr[0];
    for (int num : arr) {
        if (num > maxVal) {
            maxVal = num;
        }
    }
    return maxVal;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int maxElement = findMax(arr);
    cout << "Maximum element: " << maxElement << endl;
    return 0;
}