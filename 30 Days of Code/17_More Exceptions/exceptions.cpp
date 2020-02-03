/*
    Task: Write a Calculator class with a single method: int power(int,int). 
    The power method takes two integers, n and p, as parameters and returns the integer result of n^p. If either n or p is negative, 
    then the method must throw an exception with the message: n and p should be non-negative.
    Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.
*/

#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
struct Calculator 
{
    static int power(const int n_, const int p_)    
    {
        if (n_ < 0 || p_ < 0)
        {
            throw std::invalid_argument("n and p should be non-negative");
        }

        int ans = 1;
        for (int i = 0; i < p_ ; i++)
        {
            ans *= n_;
        }
        return ans;
        //return pow(n_,p_);
    }
};


int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}