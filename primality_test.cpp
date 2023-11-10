#include <bits/stdc++.h>
using namespace std;

// ******* Naive Approach *******
// naive approach to check whether a number is prime or not is 
// 
bool isPrime(int n)
{
   if(n==1) return false;
   for(int i=2;i<n;i++)
   {
      if(n%i==0) return false;
   }
   return true;
}
// 
// T.C --> O(N) 

// ******* Better Approach *******
// all divisors of a number occur in pairs such that a*b= N
// for example 12 has following divisors 
// (1,12) (2,6) (3,4) (4,3) (6,2) (12,1) 
// so if you find one then there is no need to find other
// for all divisors one of them exist before sqrt(N) and one after sqrt(N) or at sqrt(N)
//
 bool isPrimeBetter(int n)
{
   if(n==1) return false;
   for(int i=2;i*i<n;i++)
   {
      if(n%i==0) return false;
   }
   return true;
}
// 
// T.C --> O(sqrt(N))



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout<<isPrime(10);
    cout<<isPrimeBetter(10);

    return 0;
}
