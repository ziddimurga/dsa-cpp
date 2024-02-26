#include <iostream>
using namespace std;
int main() {
  int arr[10], key, i;
  cout << "Enter elements to make an array" << endl;
  for (i = 0; i < 10; i++) {
    cin >> arr[i];
  }
  cout << "Enter a number to search" << endl;
  cin >> key;
  for (i = 0; i < 10; i++) {
    if (arr[i] == key) {
      cout << "Number found at index number " << i << endl;
      break;
    } else
      cout << "Number not found" << endl;
  }
}
