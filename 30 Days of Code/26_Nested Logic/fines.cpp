https://www.hackerrank.com/challenges/30-nested-logic/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int da, ma, ya;
    cin >> da;
    cin >> ma;
    cin >> ya;

    int de, me, ye;
    cin >> de;
    cin >> me;
    cin >> ye;

    int fine = 0;

    if (ya > ye) {fine = 10000;}
    if (ya == ye) {
        if (ma > me) {fine = (ma - me) * 500;}
        if (ma == me && da > de) {fine = (da - de) * 15;}
    }
    
    cout << fine;
    return 0;
}