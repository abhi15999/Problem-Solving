//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    regex target("(WUB)+");
    string r = " ";
    s = regex_replace(s, target, r);
    cout << s;

    return 0;
}