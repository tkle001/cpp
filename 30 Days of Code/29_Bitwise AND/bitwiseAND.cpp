/*
    Task:
        Given set S = {1, 2, 3, ..., N}. 
        Find two integers, A and B (where A < B), from set S such that the value of A&B is 
        the maximum possible and also less than a given integer, K. 
        In this case, & represents the bitwise AND operator.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        int n;
        int k;
        int highestVal = 0;
        cin >> n >> k;

        for (int a = 1; a < n; a++) {
            for (int b = a + 1; b <= n; b++) {
                if ((a & b) > highestVal && (a & b) < k) {
                    highestVal = (a & b);
                }
            }
        }

        cout << highestVal << endl;
    }
}
