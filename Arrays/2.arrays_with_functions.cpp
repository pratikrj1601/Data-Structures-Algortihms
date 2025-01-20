#include<iostream>
using namespace std;

// Arrays are always passed by reference to functions as they will be decay to pointers when we pass them to array as an argument. 
// So int arr[8] will decay to int *arr, size will be ignored.

void UpdateArray(int arr[], int size) {

    for(int i=0; i<size; i++)
        arr[i]+=10;
}

void UserInputIntoArray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout<<"enter the value at: "<<i<<" --> ";
        cin>>arr[i];
    }
}


void printArray(int arr[], int size) {

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {

  int arr[8];
  
  UserInputIntoArray(arr,8);
  
  cout<<"Before updatation:"<<endl;
  printArray(arr,8);
  
  UpdateArray(arr,8);
  
  cout<<"After updatation:"<<endl;
  printArray(arr,8);
  
  return 0;
  
}
