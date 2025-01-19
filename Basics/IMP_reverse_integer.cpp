#include<iostream>
using namespace std;

// 1232

// rem=2
// ans = 0*10 + 2 = 2

// rem=3
// ans = 2*10 + 3 = 23

// rem=2 
// ans = 23*10 + 2 = 232

// rem=1
// ans = 232*10 + 1 = 2321

int reverseInterger(int n) {

    int ans = 0;

    while(n!=0) {
        
        int digit = n%10;
        if((ans > (INT_MAX/10) ) || (ans < (INT_MIN/10)))
            return 0;

        ans = ans*10 + digit;
        n=n/10;
    }
    return ans;
}

int main() {

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int ans = reverseInterger(n);
    cout<<ans;

    return 0;
}