#include<iostream>
#include<vector>
using namespace std;

// leetcode 136

int find_single_number(vector<int> &nums) {
    
    int ans = 0;
    
    for(int i=0; i<nums.size(); i++) {
        ans ^= nums[i];
    }
    return ans;
}



int main() {

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);

    int ans = find_single_number(nums);
    cout<<ans;

    return 0;
}
