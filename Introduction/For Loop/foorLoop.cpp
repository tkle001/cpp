/*
    Input Format: You will be given two positive integers,a and b (a ≤ b), separated by a newline.
    Output: 
    For each integer  in the interval  :
        If 1 ≤ n ≤ 9, then print the English representation of it in lowercase. 
            That is "one" for 1, "two" for 2, and so on.
        Else if  n > 9 and it is an even number, then print "even".
        Else if  n > 9 and it is an odd number, then print "odd".
*/

#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
 
using namespace std;

string int_to_str(int n);
string even_or_odd(int i);

int main() {
    // Complete the code.
    int a;
    int b;

    cin >> a;
    cin >> b;
    
    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9) {cout << int_to_str(i) << endl;}
        if (i > 9) {cout << even_or_odd(i) << endl;}
    }

    return 0;
}


string int_to_str(int n)
{
    string s;

    if (n == 1) {s = "one";}
    if (n == 2) {s = "two";}
    if (n == 3) {s = "three";}
    if (n == 4) {s = "four";}
    if (n == 5) {s = "five";}
    if (n == 6) {s = "six";}
    if (n == 7) {s = "seven";}
    if (n == 8) {s = "eight";}
    if (n == 9) {s = "nine";}

    return s;
}

string even_or_odd(int i)
{
    if (i%2 == 0) { return "even";}
    else {return "odd";}
}
