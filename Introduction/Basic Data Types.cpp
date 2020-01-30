/*
Some C++ data types, their format specifiers, and their most common bit widths are as follows:
    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value

TASK
    - Input: consists of the following space-separated values: int, long, char, float, and double, respectively.
    - Output: print each element on a new line in the same order it was received as input. 
    Notes that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    scanf("%i %ld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%i\n%ld\n%c\n%f\n%lf\n", i, l, c, f, d);

    return 0;
}

