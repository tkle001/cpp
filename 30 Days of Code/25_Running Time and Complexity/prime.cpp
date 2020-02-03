/*
    A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. 
    Given a number, n, determine and print whether it's PRIME or NOT PRIME.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;

        if (n >= 2 && isPrime(n)) cout << "Prime" << endl;
        else cout << "Not prime" << endl;
    }
    return 0;
}

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}
