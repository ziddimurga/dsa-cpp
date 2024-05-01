#include <iostream>

using namespace std;

int main() {
    int arr[100], min, max, mid, size, element, i;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array in sorted order: ";
    for (i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> element;

    min = 0;
    max = size - 1;
    mid = (min + max) / 2;

    while (min <= max) {
        if (arr[mid] == element) {
            cout << "Element found at index " << mid << endl;
            return 0;
        } else if (arr[mid] < element) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
        mid = (min + max) / 2;
    }

    cout << "Element not found in the array." << endl;

}