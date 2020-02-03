// https://www.hackerrank.com/challenges/30-scope/copy-from/133003329

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> elements){
        this->elements = elements;
    }
    void computeDifference(){
        int max = 0;
        int diff = 0;
        int n = this->elements.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                diff = abs(elements[i] - elements[j]);
                if (diff > max)
                {
                    max = diff;
                }
            }
        }
        maximumDifference = max;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}