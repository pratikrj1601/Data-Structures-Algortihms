#include<iostream>
#include<climits>
using namespace std;

// Arrays are always passed by reference to functions as they will be decay to pointers when we pass them to array as an argument. so int arr[8] will decay to int *arr, size will be ignored.

void UserInputIntoArray(int arr[], int size) {

    for(int i=0; i<size; i++)
        cin>>arr[i];
}

pair<int,int> find_min_max(int arr[], int size) {
    
    pair<int,int> p = make_pair(-1, -1);
    
    int mini = INT_MAX, maxi = INT_MIN;
    
    for(int i=0; i<size; i++) {
        if(arr[i] > maxi) maxi = arr[i];
        if(arr[i] < mini) mini = arr[i];
    }
    
    p.first = mini;
    p.second = maxi;
    
    return p;
}

int main() {

  int arr[8], target;
  
  UserInputIntoArray(arr,8);
  
  pair <int,int> ans = find_min_max(arr,8);
  cout<<"Min is: "<<ans.first<<" and Max is: "<<ans.second<<endl;

  
  return 0;
  
}
