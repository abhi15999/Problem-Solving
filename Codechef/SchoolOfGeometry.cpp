//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long t, i, m, s = 0;
    cin >> t;
    long long n;
    while (t--)
    {
        cin >> n;
        long long a[n], b[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        for (i = 0; i < n; i++)
        {
            m = min(a[i], b[i]);
            s = s + m;
        }
        cout << s << endl;
        s = 0;
    }
    return 0;
}
