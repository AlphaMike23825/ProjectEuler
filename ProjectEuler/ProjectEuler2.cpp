#include <iostream>
using namespace std;

typedef unsigned long long ull;
ull compute(ull n) {
    ull fib1 = 1;
    ull fib2 = 2;

    ull total = 0; 
    while(fib2 < n) {
        if (fib2 % 2 == 0) {
            total += fib2;
        } 
        ull fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    return total;
}

int main(){
 
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        ull n;
        cin >> n;
        cout << compute(n) << endl;   
    }
    return 0;
}
