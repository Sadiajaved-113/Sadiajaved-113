
#include <iostream>

using namespace std; // optional, but can simplify code

void selectionSort(int arr[], int n) {
 for (int i = 0; i < n - 1; i++) {
  // Find the index of the minimum element in the unsorted part
  int minIndex = i;
  for (int j = i + 1; j < n; j++) {
   if (arr[j] < arr[minIndex]) {
    minIndex = j;
   }
  }

  // Swap the minimum element with the current element
  if (minIndex != i) {
   swap(arr[i], arr[minIndex]);
  }
 }
}

void printArray(int arr[], int n) {
 for (int i = 0; i < n; i++) {
  cout << arr[i] << " ";
 }
 cout << endl;
}

int main() {
 int arr[] = {64, 34, 25, 12, 22, 11};
 int n = sizeof(arr) / sizeof(arr[0]);
 cout << "Unsorted array: ";
 printArray(arr, n);
 selectionSort(arr, n);
 cout << "Sorted array: ";
 printArray(arr, n);
 return 0;
}
