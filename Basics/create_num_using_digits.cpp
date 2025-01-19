#include<iostream>
using namespace std;

void createNumberUsingDigits(int n) {

    int ans = 0;
    
    for(int i=1; i<=n; i++) {
        int digit;
        cout<<"Enter the digit: "<<endl;
        cin>>digit;
        ans = (ans * 10) + digit;
        cout<<"Number created so far is: "<<ans<<endl;
    }
}

int main() {

    int n;
    cout<<"Enter the no. of digits you want: ";
    cin>>n;

    createNumberUsingDigits(n);

    return 0;
}