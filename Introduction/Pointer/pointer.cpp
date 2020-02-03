/*
    Input Format: Input will contain two integers, a and b, separated by a newline.
    Output Format: You have to print the updated value of a' and b', on two different lines.  
        a' = a + b
        b' = |a - b| 
*/

#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    // Complete this function 
    int og_a = *a;
    *a = *a + *b;
    *b = abs(og_a - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

