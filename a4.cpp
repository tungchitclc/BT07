#include <iostream>
using namespace std;

int binarySearch(int* arr, int left, int right, int x) {
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;
    if (arr[mid] == x) {
        return mid;
    } else if (arr[mid] < x) {
        return binarySearch(arr, mid + 1, right, x);
    } else {
        return binarySearch(arr, left, mid - 1, x);
    }
}

int main() {
    int arr[]= {1,3,5,7,9,11,13,15};

    int n = sizeof(arr) / sizeof(int);
    int x ; cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) {
        cout << "Khong tim thay phan tu " << x << " trong mang" << endl;
    } else {
        cout << "Tim thay phan tu " << x << " tai vi tri " << result << endl;
    }

    return 0;
}
