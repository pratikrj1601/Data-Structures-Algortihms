#include<iostream>
#include <vector>
using namespace std;

// This code will print all the possible pairs but if you just want to find the first pair then you can return that pair and no further checks required.

vector<pair<int, int>> print_All_Pairs(int arr[], int n, int target) {
    
    pair<int, int> p = {-1, -1};
    vector<pair<int, int>> ans;
    

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                p.first = arr[i];
                p.second = arr[j];
                ans.push_back(p);
            }
        }
    }
    
    return ans;
}

int main() {


    int arr[] = {1,2,3,4};
    vector<pair<int,int>> ans = print_All_Pairs(arr, 4, 6);
    
    for(auto i : ans)
        cout<<"{"<<i.first<<","<<i.second<<"}"<<endl;

    return 0;
}
