#include <iostream>
using namespace std;

void mergeSortedArrays(int arr1[], int arr2[], int n, int m, int arr3[]) {
    int i = 0, j = 0, k = 0;

    // Merge while both arrays have elements
    while (i < n && j < m) {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Copy remaining elements of arr1
    while (i < n)
        arr3[k++] = arr1[i++];

    // Copy remaining elements of arr2
    while (j < m)
        arr3[k++] = arr2[j++];
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n + m];

    mergeSortedArrays(arr1, arr2, n, m, arr3);

    cout << "Merged sorted array is: ";
    for (int i = 0; i < n + m; i++)
        cout << arr3[i] << " ";
    cout << endl;

    return 0;
}
