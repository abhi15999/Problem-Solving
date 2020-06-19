//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int n,m;
string s1,s2;
map<string,string>a;

void solve()
{
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        cin>>s1>>s2;
        a[s1]=(s1.size()<=s2.size()) ? s1:s2;
    }

    for (int i = 0; i < n; i++)
    {
        cin>>s1;
        cout<<a[s1]<<" ";   
    }
    
}

int main()
{ 
  solve();
  return 0;
}