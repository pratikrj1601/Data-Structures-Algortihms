#include<iostream>
using namespace std;

// Arrays are always passed by reference to functions as they will be decay to pointers when we pass them to array as an argument. so int arr[8] will decay to int *arr, size will be ignored.

void UserInputIntoArray(int arr[], int size) {

    for(int i=0; i<size; i++)
        cin>>arr[i];
}

bool linear_search(int arr[], int size, int target) {
    bool ans = false;
    for(int i=0; i<size; i++){
        if(arr[i] == target) return true;
    }
    return ans;
}


void printArray(int arr[], int size) {

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {

  int arr[8], target;
  
  UserInputIntoArray(arr,8);
  
  cout<<"printing updatation:"<<endl;
  printArray(arr,8);
  
  
  bool ans = linear_search(arr,8,30);
  if(ans) cout<<"Target found"<<endl;
  else cout<<"Target not found"<<endl;
  
  return 0;
  
}
