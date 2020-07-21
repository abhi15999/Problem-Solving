//Most fucked up ADHOC question

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
        int d;
        cin >> d;
        cout << d * 2 + 1 << endl;
        for (int i = 0; i < d; ++i)
        {
            cout << "a";
        }
        cout << "b";
        for (int i = 0; i < d; ++i)
        {
            cout << "a";
        }
        cout << endl;


    }
    return 0;
}
