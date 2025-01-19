#include<iostream>
using namespace std;

int main() {

    int n, k, mask=1;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Enter the offset: ";
    cin>>k;

    // left shift the mask to K times and then perform bitwise OR

    cout<<(n|(mask<<k));
    return 0;
}