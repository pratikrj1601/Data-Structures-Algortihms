#include<iostream>
using namespace std;

int main() {

    int n, remainder=0;
    cout<<"Enter an integer: ";
    cin>>n;

    while(n!=0) {
        remainder = n%10;
        n/=10;
        cout<<"digit is: "<<remainder<<endl;
    }

    return 0;
}