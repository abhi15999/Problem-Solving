#include <bits/stdc++.h>
using namespace std;

bool is_permutation(string s, string t)
{
    if(s.size()!=t.size())
    {
        return false;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=t[i])
        {
            return false;
        }
    }

    return true;
    
}

int main(int argc, const char** argv) {
    
    string s,t;
    cin>>s>>t;
    if(is_permutation(s,t))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}