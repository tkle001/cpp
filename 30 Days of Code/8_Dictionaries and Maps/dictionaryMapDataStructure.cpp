/*
    Task: Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
    You will then be given an unknown number of names to query your phone book for. For each name queried, 
    print the associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for name is not found, 
    print Not found instead.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;
    string name;

    map<string, int> phone_book;

    for (int i = 0; i <n; i++)
    {
        cin >> name;
        if (!phone_book[name]) {
            cin >> phone_book[name];
        }
    }
    while (cin>>name) 
    {
        if (phone_book[name]) {
            cout << name << "=" << phone_book[name]<< endl;
        } else {
            cout << "Not found" << endl;
        }
    }   
    return 0;
}

