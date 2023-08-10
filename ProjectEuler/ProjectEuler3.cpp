#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long n) {
    for(int i = 2; i <= sqrt(n); i ++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long getLargestPrimeFactor(long n) {
    long maxPrime = 0;
    for(int i = (int)sqrt(n); i >= 1; i --) {
        if (n % i == 0) {
            int factor1 = i;
            long factor2 = n / i;
            if (isPrime(factor1)) {
                maxPrime = max(maxPrime, (long)factor1);
            }
            if (isPrime(factor2)) {
                maxPrime = max(maxPrime, factor2);
            }
        }
    }
    return maxPrime;
}

int main(){
    int t;
    cin >> t;
    
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout << getLargestPrimeFactor(n) << endl;
    }
    return 0;
}
