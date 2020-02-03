/*
    Task: Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String.
    Note: You must use the String-to-Integer and exception handling constructs built into your submission language. 
*/

#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;

    int i;
    try {
        i = stoi(S);
        cout << i;
    } catch (...) {
        cout << "Bad String";
    }

    return 0;
}
