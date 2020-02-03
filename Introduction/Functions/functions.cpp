/*
    Input Format: Input will contain four integers (a, b, c, d), one in each line.
    Output Format: Print the greatest of the four integers.
*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int temp1 = 0;
    int temp2 = 0;
    if (a > b) {temp1 = a;} else {temp1 = b;}
    if (c > d) {temp1 = c;} else {temp2 = d;}
    if (temp1 > temp2) {return temp1;} else {return temp2;}
}

