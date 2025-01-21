#include<iostream>
using namespace std;

void sort_0s_1s_method2(int arr[], int n) {

    int low = 0, high = n-1;
    
    while(low<high) {
        if(arr[low]>arr[high]) swap(arr[low++], arr[high--]);
        else low++, high--;
    }
    
    cout<<"using method2:"<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}


void sort_0s_1s(int arr[], int n) {

    int zeroCount=0, oneCount=0;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }
        if(arr[i]==1) {
            oneCount++;
        }
    }
    
    fill(arr, arr+zeroCount, 0);
    fill(arr+zeroCount, arr+n, 1);
    
    cout<<"using method1:"<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {

    int arr[] = {1,0,1,1,1,0,0,0,1};
    int n = 9;
    sort_0s_1s(arr, n);
    sort_0s_1s_method2(arr,n);
    return 0;

}
