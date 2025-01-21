#include<iostream>
using namespace std;

void print_All_Pairs(int arr[], int n) {

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
        cout<<endl;
    }
}

int main() {

    pair<int, int> p;

    int arr[] = {1,2,3,4};
    print_All_Pairs(arr, 4);

    return 0;
}
