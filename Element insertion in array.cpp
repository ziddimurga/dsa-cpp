#include <iostream>
using namespace std;
int main() {
  int arr[100], size, position, item;
  cout << "Enter size of array" << endl;
  cin >> size;
  cout << "Enter elements to make an array" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "Enter position that you want to insert an element" << endl;
  cin >> position;
  cout << "Enter element that you want to insert" << endl;
  cin >> item;
  for (int i = size; i >= position; i--) {
    arr[i] = arr[i - 1];
  }
  arr[position] = item;
  size++;
  cout<<"The final array is"<<endl;
  for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<endl;
    }
  return 0;
}