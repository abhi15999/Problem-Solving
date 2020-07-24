
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    std::ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--)
    {

        int n, m;
        bool flag = false;
        cin >> n >> m;
        vector<int>a(n), b(m);
        vector<int>c(1005,0);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            c[a[i]] = 1;

        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];

        }

        for (int i = 0; i < m; ++i)
        {
            if(c[b[i]])
            {
                cout << "YES" << endl;
                cout << "1 " << b[i] << endl;
                flag = true;
                break;
            }
        }

        if(!flag)
        {
            cout << "NO" << endl;
        }



    }

    return 0;
}
