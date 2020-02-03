/*
    Input Format: The first line of the input contains N, where N is the number of integers.
    The next line contains N integers separated by a space.
    Output Format: Print the N integers of the array in the reverse order in a single line separated by a space.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort_arr(int*a, int n);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n = 0;  
    cin >> n;
    //cout << n << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort_arr(arr, n);
    
    return 0;


}

void sort_arr(int*a, int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}
