// Insertion sort in C++
#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[]) {
  for (int i = 0; i < 5; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[]) {
  for (int k = 1; k < 5; k++) {
    int key = array[k];
    int j = k - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver code
int main() {
  int data[] = {9, 5, 1, 4, 3};
  insertionSort(data);
  cout << "Sorted array in ascending order:\n";
  printArray(data);
}