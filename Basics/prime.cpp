#include<iostream>
using namespace std;

bool checkPrime(int n) {

    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool result = checkPrime(n);

    if(result)
        cout<<n<<" is prime"<<endl;
    else    
        cout<<n<<" is not prime"<<endl;

    return 0;
}