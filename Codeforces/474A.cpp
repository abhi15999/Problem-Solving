//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    char k[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string c, s;
    cin >> c >> s;

    if (c == "L")
    {
        for (i = 0; i < s.size(); i++)
        {
            for (j = 0; j < strlen(k); j++)
            {
                if (s[i] == k[j])
                {
                    cout << k[j + 1];
                }
            }
        }
    }

    else
    {
        for (i = 0; i < s.size(); i++)
        {
            for (j = 0; j < strlen(k); j++)
            {
                if (s[i] == k[j])
                {
                    cout << k[j - 1];
                }
            }
        }
    }

    return 0;
}
