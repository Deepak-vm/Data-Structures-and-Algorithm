//merge sort using recursion
#include <iostream>
using namespace std;

void merge(int *arr, int i, int j, int mid) {
    int len1 = mid - i + 1;
    int len2 = j - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int k = i;
    for (int a = 0; a < len1; a++) {
        first[a] = arr[k++];
    }
    k = mid + 1;
    for (int b = 0; b < len2; b++) {
        second[b] = arr[k++];
    }

    // Merge two sorted values
    int index1 = 0;
    int index2 = 0;
    k = i;
    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[k++] = first[index1++];
        } else {
            arr[k++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[k++] = first[index1++];
    }
    while (index2 < len2) {
        arr[k++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int i, int j) {
    if (i >= j) {
        return;
    }
    int mid = i + (j - i) / 2;
    mergesort(arr, i, mid);
    mergesort(arr, mid + 1, j);

    merge(arr, i, j, mid);
}

int main() {
    int arr[5] = {33, 44, 35, 55, 32};
    int n = 5;
    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
        