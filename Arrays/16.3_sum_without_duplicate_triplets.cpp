#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// This code will print all the possible pairs but if you just want to find the first pair then you can return that pair and no further checks required.

void print_vector(vector<vector<int> >&ans) {
    for(auto i : ans) {
        for(auto j : i)
            cout<<j<<" ";
        cout<<endl;
    }
}

vector<vector<int> > Optimized_print_All_Pairs(int arr[], int n, int target) {
    
    vector<vector<int> > ans;

    // as we want to find triplet first element will only go till size -2 
    for(int i=0; i<n-2; i++) {
        
        if(i>0 && arr[i] == arr[i-1]) continue;
        int start = i+1, end = n-1;
        
        while(start<end) {
            
            if(arr[start] == arr[start+1]) start++;
            if(arr[end] == arr[end-1]) end--;
            if(arr[start] == arr[end]) continue;
            
            int sum = arr[i] + arr[start] + arr[end];
            
            if(sum == target) {
                ans.push_back({arr[i], arr[start], arr[end]});
                start++;
                end--;
            }
            
            else if(sum > target) end--;
            
            else start++;
        }
    }
    return ans;
}

vector<vector<int> > print_All_Pairs(int arr[], int n, int target) {

    vector<vector<int> > ans;
    
    for(int i=0; i<n; i++) {
        
        if(i>0 && arr[i] == arr[i-1]) continue;

        for(int j=i+1; j<n; j++) {
            
            if(arr[j] == arr[j-1]) continue;
            
            for(int k=j+1; k<n; k++) {
                
                if(arr[k] == arr[k-1]) continue;
                
                vector<int> temp;
                if(arr[i] + arr[j] + arr[k] == target) {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
        
    }
    
    return ans;
}

int main() {
    
    int arr[] = {4, -1, -1, 0, 2, 1, -2, 3, 3, -2};
    sort(arr, arr+10);
    
    vector<vector<int> > ans = print_All_Pairs(arr, 10, 4);
    vector<vector<int> > ans2 = Optimized_print_All_Pairs(arr, 10, 4);
    
    cout<<"using brute force approach"<<endl;
    print_vector(ans);
    cout<<endl<<"using Optimized approach"<<endl;
    print_vector(ans2);
    
    return 0;
}
