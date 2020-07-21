#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int T,n;
    string s;
    cin >> T;
    while(T--)
    {
   
        cin>>n;
        cin>>s;
        map<char,int>m;
        int flag=0;

        for (int i = 0; i < n; ++i)
        {
          m[s[i]]++;
        }

        for(auto it:m)
        {
          if(it.second % 2 != 0)
          {
            flag=1;
            break;
          }
        }

        if(flag)
        {
          cout<<"NO"<<endl;
        }
        else
        {
          cout<<"YES"<<endl;
        }
    }
    return 0;
}
