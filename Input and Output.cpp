/* 
    In this challenge, we're practicing reading input from stdin and printing output to stdout. 
    Task: Read 3 numbers from stdin and print their sum to stdout.
*/ 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    int n = 0;
    // A single line containing 3 space-separated integers: a, b, and c.
    for (int i = 0; i < 3; i++)
    {
        cin >> s ;
        n += stoi(s);
    }

    cout << n << endl;
    return 0;
}