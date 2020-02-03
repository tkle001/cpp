/*
    Input Format:
        The first line contains two space-separated integers denoting the respective values of
            - n (the number of variable-length arrays) 
            - q (the number of queries).
        Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
        Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array ) and j (an index in the array referenced by a[i]) for a query.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n, q;
    cin >> n >> q;

    vector<vector<int>> array(n);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        array[i].resize(k);
        for (int j = 0; j < k; j++)
            cin >> array[i][j];
    }
    
    for (int i = 0; i < q; i++) {
        int row, col;
        cin >> row >> col;
        cout << array[row][col] << endl;
    }
    
    return 0;
}
