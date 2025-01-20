#include<iostream>
#include<vector>
using namespace std;

void ones_compliment(int arr[], int n) {
    
    // flipping the bits
    for(int i=0; i<n; i++) {
        arr[i] = 1 - arr[i];
    }
}

void two_Compliment(int arr[], int n) {

    ones_compliment(arr, n);
    
    // taken initial carry as 1 because in 1's compliment we are adding 1 to LSB in starting
    int carry = 1, sum = 0, i=n-1;
    vector<int> ans;
    
    while(i>=0) {
        // performing addition
        sum = arr[i] + carry;
        
        // push remainder to vector as it is binary so dividing the sum with 2
        ans.push_back(sum%2);
        
        // store quotient as a carry for the next element
        carry = sum / 2;
        
        i--;
    }
    
    // if carry is still present after addintion, add it to vector 
    while(carry) {
        ans.push_back(carry);
        carry/=2;
    }
    
    // need to print in reverse direction as we have added elements from backwards when we have performed addition.
    cout<<"\nafter 2's compliment:"<<endl;
    vector<int>::iterator it = ans.end();
    
    while(it != ans.begin()) {
        it--;
        cout<<*it<<" ";
        
    }
    
    cout<<endl;
    
}

int main() {

    int arr[9] = {0,1,1,0,0,1,1,1,0};

    two_Compliment(arr, 9);
    
    return 0;
}
