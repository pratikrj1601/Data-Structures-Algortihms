#include<iostream>
using namespace std;

bool moduloMethod(int number) {

    if((number%2) == 0) {
        return true;
    }
    return false;
}

bool bitwiseMethod(int number) {

    if((number&1) == 0) {
        return true;
    }
    return false;
}

int main() {

    int number;
    cout<<"Enter the number: ";
    cin>>number;

    bool result1 = moduloMethod(number);
    bool result2 = bitwiseMethod(number);

    if(result1)
        cout<<"Number is even"<<endl;
    else
        cout<<"Number is odd"<<endl;

    if(result2)
        cout<<"Number is even"<<endl;
    else
        cout<<"Number is odd"<<endl;
    return 0;
}