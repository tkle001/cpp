/*
    Task: Given a base-10 integer, n, convert it to binary (base-2). 
    Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.
*/

#include <bits/stdc++.h>
#include <iostream>  

using namespace std;

int main()
{   
    int size = 20; // max binary digits for 10^6 is 20
    int a[size]; 
    int n;
    int sum = 0;
    int count = 0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; n > 0; i++)
    {
        a[i] = n%2;
        n = n/2;
        if (a[i] == 1)
        {
            sum++;
            if (sum > count)
            {
                count = sum;
            }
        }
        else
        {
            sum = 0;
        }
    }

    cout << count << endl;
    // Print array a for binary value

    return 0;
}
