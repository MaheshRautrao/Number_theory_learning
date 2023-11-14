#include <bits/stdc++.h>
using namespace std;

long long brutePower(int base, int expo)
{
    long long res = 1;
    for (int i = 1; i <= expo; i++)
    {
        res = res * base;
    }
    return res;
}

long long binaryExpo(int base, int expo)
{
    // ** recursive--->
    // if (expo == 1)
    //     return base;
    // long long res = binaryExpo(base, expo / 2);
    // if (expo % 2 == 0)
    //     return res * res;
    // else
    //     return base * res * res;

    // ** iterative --->
    int res = 1;

    while (expo)
    {
        if (expo % 2)
            res *= base,
                expo--;
        if (!expo)
            break;
        res *= res,
            expo /= 2;
    }
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int base, expo;
    cin >> base >> expo;

    // bruteforce
    cout << brutePower(base, expo) << endl;
    cout << binaryExpo(base, expo) << endl;
    return 0;
}