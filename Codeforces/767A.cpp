//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    priority_queue<int> p;

    x = n;
    for (i = 0; i < n; i++)
    {
        p.push(a[i]);
        while (p.top() == x)
        {
            cout << x << " ";
            x--;
            p.pop();
        }
        cout << "\n";
    }

    return 0;
}
