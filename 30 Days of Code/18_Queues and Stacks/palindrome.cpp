/*
A palindrome is a word, phrase, number, or other sequence of characters which reads the same backwards and forwards. Can you determine if a given string is a palindrome?
*/

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
    //Write your code here
    private:
        queue<char> _q;
        stack<char> _s;
    public:
        void pushCharacter(const char c_)
        {
            _s.push(c_);
        }

        void enqueueCharacter(const char c_)
        {
            _q.push(c_);
        }
        char popCharacter()
        {
            char c = _s.top();
            _s.pop();
            return c;
        }
        char dequeueCharacter()
        {
            char c = _q.front();
            _q.pop();
            return c;
        }

};

