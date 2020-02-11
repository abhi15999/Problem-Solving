//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, i, x;
    cin >> n;
    set<int> a;
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> x;
        a.insert(x);
    }

    cin >> q;
    for (i = 0; i < q; i++)
    {
        cin >> x;
        a.insert(x);
    }

    if (a.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
