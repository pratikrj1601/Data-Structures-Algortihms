#include<iostream>
using namespace std;

// 1's complement

void fliptheBit1(int arr[], int n) {
    cout<<"using method2: ";
    for(int i=0; i<n; i++)
        arr[i] = 1 - arr[i];

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void fliptheBit2(int arr[], int n) {
    cout<<"using method1: ";
    for(int i=0; i<n; i++) {
        if(arr[i] == 1) arr[i] = 0;
        else if(arr[i] == 0) arr[i] = 1;
    }

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {

    int arr[9] = {0,1,1,0,0,1,1,1,0};

    fliptheBit1(arr, 9);
    fliptheBit2(arr, 9);
    return 0;
}
