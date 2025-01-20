#include<iostream>
using namespace std;

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {

  // creation
  int arr[5]; // Need to give size, you cannot declare array like int arr[];

  // initialization
  int a[5] = {10,20,30,40,50}; 
  int b[] = {1,2,3,4,5,6,7,8}; // size is optional when we initialize the array using 

  int c[5] = {0}; // all elements will be initialized with 0
  int d[5] = {10,20};
  // int e[5] = {1,2,3,4,5,6}; will give error: too many initializers for 'int [5]'

  cout<<"Before using fill method array C was:"<<endl;
  printArray(c,5);

  // How to fill same value other than zero to whole array
  fill(c, c+5, 101);

  cout<<"Before using fill method array C was:"<<endl;
  printArray(c,5);

  return 0;
  
}
