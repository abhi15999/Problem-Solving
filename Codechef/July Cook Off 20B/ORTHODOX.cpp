#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    ll T;
    cin >> T;
    while(T--)
    {

        ll n;
        cin >> n;
        vector<ll>a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if(n > 60)
        {
            cout << "NO" << endl;
        }
        else
        {   
            set<ll>s;
            for (int i = 0; i < n; ++i)
            {
                ll x = 0;
                for (int j = i; j < n; ++j)
                {
                    x  |= a[j];
                    s.insert(x);
                }
            }

            if(s.size() != (n * (n + 1)) / 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }

    }
    return 0;
}
