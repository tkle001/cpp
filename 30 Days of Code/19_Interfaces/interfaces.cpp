/*
    Task:
    The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are provided.
    Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. 
    The implementation for the divisorSum(n) method must return the sum of all divisors of n.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int sum = 0;
    int divisorSum(int n) {
        
        for (int i = n; i> 0; i--)
        {
            if(n%i == 0)
            {
                sum = sum + i ;
            }
        }

        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}