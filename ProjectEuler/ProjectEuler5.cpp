#include <iostream>
using namespace std;
    
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    
    int smallest [41] = { 0 };
    smallest[1] = 1;
    smallest[2] = 2;
    for(int i = 3; i <= 40; i ++) {
        smallest[i] = (smallest[i-1] * i) / gcd(smallest[i-1], i);
    }
    
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << smallest[n] << endl;
    }
    return 0;
}
