#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        long long s1 = 0, s2 = 0;
        for(int i = 1; i<= n; i ++) {
            s1 += i;
            s2 += (i * i);
        }
        long long s3 = s1 * s1;
        cout << abs(s3 - s2) << endl;
    }
    return 0;
}
