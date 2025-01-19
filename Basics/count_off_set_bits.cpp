#include<iostream>
using namespace std;

int bitwiseMethod(int n) {
    int count=0;
     while(n>0) {
        int bit = n&1;
        if(bit == 1)
            count++;
        n = (n >> 1);
    }
    return count;
}

int moduloMethod(int n) {
    int count=0;
     while(n>0) {
        int bit = n%2;
        if(bit == 1)
            count++;
        n = (n/2);
    }
    return count;
}

int main() {

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = bitwiseMethod(n);
    int count2 = moduloMethod(n);

    cout<<count<<endl;
    cout<<count2<<endl;
    return 0;
}