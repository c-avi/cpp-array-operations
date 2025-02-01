#include <iostream>
using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// Function to check if the array is sorted in ascending order
bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to find the maximum and minimum elements in the array
void findMaxMin(int arr[], int size, int &maxElement, int &minElement) {
    maxElement = arr[0];
    minElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
}

// Function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Enter 10 integers to populate the array: \n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    while (true) {
        cout << "\nChoose an operation:\n";
        cout << "1. Reverse the array\n";
        cout << "2. Check if the array is sorted in ascending order\n";
        cout << "3. Find the maximum and minimum elements\n";
        cout << "4. Display the original array\n";
        cout << "5. Exit\n";
        
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                reverseArray(arr, SIZE);
                cout << "Reversed array: ";
                displayArray(arr, SIZE);
                break;
            }
            case 2: {
                if (isSorted(arr, SIZE)) {
                    cout << "The array is sorted in ascending order.\n";
                } else {
                    cout << "The array is not sorted in ascending order.\n";
                }
                break;
            }
            case 3: {
                int maxElement, minElement;
                findMaxMin(arr, SIZE, maxElement, minElement);
                cout << "Maximum element: " << maxElement << "\n";
                cout << "Minimum element: " << minElement << "\n";
                break;
            }
            case 4: {
                cout << "Original array at the point: ";
                displayArray(arr, SIZE);
                break;
            }
            case 5:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}