#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int left, int mid, int right) {
    int temp[right + 1];
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (arr[i] > arr[j]) {
            temp[k] = arr[j];
            k++;
            j++;
        } else {
            temp[k] = arr[i];
            k++;
            i++;
        }
    }

    while (i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }

    while (j <= right) {
        temp[k] = arr[j];
        k++;
        j++;
    }

    // Copy elements back to the original array
    for (int x = left; x <= right; x++) {
        arr[x] = temp[x];
    }

    // Display the current state of the array
    displayArray(arr, 7);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int array[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original Array: ";
    displayArray(array, size);

    mergeSort(array, 0, size - 1);

    cout << "Sorted Array: ";
    displayArray(array, size);

    return 0;
}