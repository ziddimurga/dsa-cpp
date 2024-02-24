#include<iostream>
using namespace std;
int main()
{
  int arr[9]={11,22,33,44,55,66,77,88,99},min=0,mid,max=9;
  int search=88;
  for(int i =0;i<9;i++)
    { 
    mid=(min+max)/2;
    if(arr[mid]==search){
      cout<<"Position"<<mid<<endl;
    }
    else if(search>arr[mid]){
      min=mid;
    }
    else if(search<arr[min]){
      max=mid;
    }
  }
  
}