#include <iostream>
using namespace std;

long sumn(long n) {
    return (n * (n + 1)) / 2;
}

long sumOfMultiplesOf3And5(long n) {
    n --;
    long cnt3s = (n / 3);
    long cnt5s = (n / 5);
    long cnt15s = (n / 15);
    return (sumn(cnt3s) * 3) + 
        (sumn(cnt5s) * 5) -
        (sumn(cnt15s) * 15);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        long result = sumOfMultiplesOf3And5(n);
        cout << result << endl;
    }
    return 0;
}
