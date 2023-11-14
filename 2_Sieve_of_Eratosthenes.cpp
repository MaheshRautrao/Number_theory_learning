#include<bits/stdc++.h>
using namespace std;

// ******* why we need sieve  ******
// suppose there are
// q queries , q <= 1 million
// n , n<= 1 million
// for each query tell prime or not
// so in this case if we run isPrime(n) for each query the time complexity will be high
// so sieve algorithm is used to efficiently calculate all prime numbers upto n
// and store them so for each query we will require constant time for answering
// 
// preprocessing time --> O( Nlog(logN) )
// extra space --> O(N)
// for each query --> (1) 
// 
// ***** steps of sieve *****
// declare a array of required size and initialize all the values as 1 means 
// consider all the numbers prime first
// make value at 1 -> 0 as it is not prime
// start from 2 
// go to each multiple of 2 starting from number'th multiple means
// for 2 go from 2nd multiple of 2 i.e 4
// for 3 go from 3rd multiple of 3 i.e 9
// for 8 go from 8th multiple of 8 i.e 64
// why is so because the prior multiples are already marked by previous numbers
// for e.g for 4 3rd multiple of 4 i.e 12 is already marked by 3 as its 4th multiple

void sieve(vector<bool>&nums)
{
   for(int i=2;i*i<=nums.size();i++)
   {
      if(nums[i])
      {
           for(int j=i*i;j<=nums.size();j+=i)
            {
                nums[j] = 0;
            }
      }
     
   }
}

// we know that all even numbers are composite so we can reduce it to half


int main()
{
   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r",stdin);
     freopen("output.txt","w", stdout);
   #endif  
  
   int n;cin>>n;
   vector<bool>nums(n+1,1);
   nums[0] = 0;
   nums[1] = 0;
   sieve(nums);
   
   return 0;
}