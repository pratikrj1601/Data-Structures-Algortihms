#include<iostream>
using namespace std;

int findFactorial(int number) {

    int ans = 1;
    while(number>=1) {
        ans = ans * number;
        number--;
    }
    return ans;
}

int main() {
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    cout<<"Factorial of "<<number<<" is: "<<findFactorial(number)<<endl;
    return 0;
}