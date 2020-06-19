//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, i, m = 0;
    cin >> t;
    long long n, k, c;

    while (t--)
    {
        cin >> n >> k;
        long long a[n];
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            m += a[i];
        }
        cout << m % k;

        return 0;
    }
