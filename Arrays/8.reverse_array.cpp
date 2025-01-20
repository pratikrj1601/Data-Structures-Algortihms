#include<iostream>
using namespace std;

void method1(int arr[], int n) {
    
    cout<<"After calling method1:"<<endl;
    reverse(arr, arr+n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void method2(int arr[], int n) {
    
    int low=0, high=n-1;
    while(low<high) {
        arr[low] = arr[low] + arr[high];
        arr[high] = arr[low] - arr[high];
        arr[low] = arr[low] - arr[high];
        high--, low++;
    }
    
    cout<<endl<<"After calling method2:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void method3(int arr[], int n) {
    
    int low=0, high=n-1;
    
    while(low<high) swap(arr[low++], arr[high--]);
    
    cout<<endl<<"After calling method3:"<<endl;

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

    method1(arr, 8);
    method2(arr, 8);
    method3(arr, 8);

    return 0;
}
