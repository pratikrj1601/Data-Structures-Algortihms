#include<iostream>
using namespace std;

void using_temp_variable(int &a, int &b) {
    
    int temp = a;
    a = b;
    b = temp;
}

// This method will not give accurate answers if one of the values are at extream boundries.
// because interger can only store upto last 32 bits. 

// try input INT_MIN and INT_MAX (-2147483648 and 2147483647)

void using_plus_minus(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void using_XOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    
    int a,b;
    cin>>a>>b;
    using_temp_variable(a,b);
    
    cout<<"after calling using_temp_variable(a,b): "<<endl<<"a is: "<<a<<" and b is: "<<b<<endl;
    
    using_plus_minus(a,b);
    cout<<endl<<"after calling using_plus_minus(a,b): "<<endl<<"a is: "<<a<<" and b is: "<<b<<endl;
    
    using_XOR(a,b);
    cout<<endl<<"after calling using_XOR(a,b): "<<endl<<"a is: "<<a<<" and b is: "<<b<<endl;

  
  return 0;
  
}
