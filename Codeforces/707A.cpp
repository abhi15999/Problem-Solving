//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char s;
    int i, j, flag = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> s;
            if (s == 'C' || s == 'M' || s == 'Y')
            {
                flag = 1;
            }
        }
    }

    flag == 1 ? cout << "#Color" : cout << "#Black&White";

    return 0;
}