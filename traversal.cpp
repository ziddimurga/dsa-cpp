#include <iostream>
using namespace std;
int main() {
  int arr[100], element, size, i;
  cout << "Enter size of array" << endl;
  cin >> size;
  cout << "Enter elements to make an array" << endl;
  for (i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "Enter element to search" << endl;
  cin >> element;
  for (i = 0; i < size; i++) {
    if (arr[i] == element) {
      cout << "Element found at index " << i << endl;
      break;
    } else
      cout << "Element not found" << endl;
  }
  return 0;
}
