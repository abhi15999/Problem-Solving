#include <bits/stdc++.h>
#define ll long long
using namespace std;

// void reverse_arr(int arr[], int n)
// {
//     int i = 0, j = n - 1;

//     while(i < j)
//     {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

int main()
{
    std::ios::sync_with_stdio(false);
    ll T, s, n;
    cin >> T;
    while(T--)
    {
        cin >> s >> n;
        ll ans = 0;
        if(s <= n)
        {
            if(s == 1)
            {
                ans = 1;
            }
            else if(s & 1)
            {
                ans = 2;
            }
            else
            {
                ans = 1;
            }
        }
        else
        {
            if(s & 1)
            {
                ans++;
                s--;
            }

            if(s % n == 0)
            {
                ans += s / n;
            }
            else
            {
                ans += s / n;
                ans++;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
