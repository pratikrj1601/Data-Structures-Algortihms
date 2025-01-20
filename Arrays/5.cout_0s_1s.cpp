#include<iostream>
using namespace std;

void cout_0s_1s(int arr[], int n) {
    
    int zeroCount=0, oneCount=0;
    
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) zeroCount++;
        if(arr[i] == 1) oneCount++;
    }
    
    cout<<"0s are: "<<zeroCount<<" and 1s are: "<<oneCount<<endl;
}

int main() {

  int arr[] = {1,0,1,1,1,0,0,0,1};
  int n = 9;
  cout_0s_1s(arr, n);

  return 0;  
}
