#include<iostream>
using namespace std;

void printing_using_2pointers(int arr[], int n) {

    int low=0, high=n-1;
    while(low<=high) {
        if(low==high)
            cout<<arr[low++]<<" ";
        else
            cout<<arr[low++]<<" "<<arr[high--]<<" ";
    }
}


int main() {

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    printing_using_2pointers(arr, 9);

    return 0;
}
