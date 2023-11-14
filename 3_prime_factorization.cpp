#include <bits/stdc++.h>
using namespace std;

void bruteForce(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int count = 0;
            while (n % i == 0)
            {
                n = n / i,
                count++;
            }
            cout << i << "^" << count << " ";
        }
    }
    cout << endl;
}

void optimisedApproach(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int count = 0;
            while (n % i == 0)
            {
                n = n / i,
                count++;
            }
            cout << i << "^" << count << " ";
        }
    }
    if (n > 1)
        cout << n << "^" << 1 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    //    brute force approach
    bruteForce(n);
    // optimised approach
    optimisedApproach(n);
    return 0;
}
