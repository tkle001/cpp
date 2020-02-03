/*
    Task:
        Given a string, S, of length N that is indexed from 0 to N-1, 
        print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h> 
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0, len = s.length(); j < len; j++)
        {
            // print even char
            if(j%2 == 0)
            {
                cout << s[j];
            }  
        }
        cout << " ";
        for (int k = 0, len = s.length(); k < len; k++)
        {
            // print odd char
            if(k%2 != 0)
            {
                cout << s[k];
            }
        }
        cout << "\n";
        //cout << endl;
    }

    
    return 0;
}
