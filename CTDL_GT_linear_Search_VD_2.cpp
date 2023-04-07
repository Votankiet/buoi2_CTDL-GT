#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 6, 1, 8, 2};
    int target = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, target);
    if (result == -1) {
        cout << "khong tim thay phan tu" << endl;
    } else {
        cout << "tim thay phan tu tai vi tri " << result << endl;
    }
    return 0;
}
