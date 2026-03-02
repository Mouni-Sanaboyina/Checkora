#include <bits/stdc++.h>
using namespace std;
using LL = long long;
const int MOD = 1e9+7;

int main() {
    vector<int>nums = {-1, 1, 2, -2, -2, -6};
    int n = nums.size();
    sort(nums.begin(), nums.end(),[&](int a, int b){return abs(a) < abs(b);});
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}