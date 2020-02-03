
/* 
    Task: Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

    Sample Input
        1 1 1 0 0 0
        0 1 0 0 0 0
        1 1 1 0 0 0
        0 0 2 4 4 0
        0 0 0 2 0 0
        0 0 1 2 4 0
    
    Sample Output
        19
    
    Explanation
        A contains the following hourglasses:
            1 1 1   1 1 0   1 0 0   0 0 0
              1       0       0       0
            1 1 1   1 1 0   1 0 0   0 0 0

            0 1 0   1 0 0   0 0 0   0 0 0
              1       1       0       0
            0 0 2   0 2 4   2 4 4   4 4 0

            1 1 1   1 1 0   1 0 0   0 0 0
              0       2       4       4
            0 0 0   0 0 2   0 2 0   2 0 0

            0 0 2   0 2 4   2 4 4   4 4 0
              0       0       2       0
            0 0 1   0 1 2   1 2 4   2 4 0
        The hourglass with the maximum sum (19) is:
            2 4 4
              2
            1 2 4
*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    /*Following are
    typical values in a compiler where integers
    are stored using 32 bits.

    Value of INT_MAX is +2147483647.
    Value of INT_MIN is -2147483648.
    */
    int max = INT_MIN, sum = 0;

    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum = arr[i][j];
            sum += arr[i][j+1];
            sum += arr[i][j+2];
            sum += arr[i+1][j+1];
            sum += arr[i+2][j];
            sum += arr[i+2][j+1];
            sum += arr[i+2][j+2];
            if (sum > max)
            {
                max = sum;
            }
        }
    }

    cout << max << endl;

    return 0;
}
