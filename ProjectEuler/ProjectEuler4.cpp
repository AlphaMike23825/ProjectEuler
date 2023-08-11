#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool palindrome(int p) {
    int digits = log10(p);
    while(p > 0) {
        int top_digit = p / (pow(10, digits));
        int bottom_digit = p % 10;
        
        if (top_digit != bottom_digit) {
            return false;
        }
        p -= (top_digit * pow(10, digits));
        digits -= 2;
        p /= 10;
    }
    return true;
}

int main(){
    
    vector<int> v;    
    for(int i = 100; i < 1000; i ++) {
        for(int j = i + 1; j < 1000; j ++) {
            int p = i * j;
            if (palindrome(p)) {
                v.push_back(p);
            }
        }
    }
    sort(v.begin(), v.end());
    
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        auto it = lower_bound(v.begin(), v.end(), n);
        while(it != v.begin() && *it >= n) {
            -- it;
        }
        cout << *it << endl;
    }
    return 0;
}
