//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int n,a,c=0;


void solve()
{
    cin>>n>>a;
    int s[n];
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }

    for(int i=1;i<=n;i++)
    {
        if(s[i]==1)
        {
            int d =i-a;
            int j=a-d;
            if(j<1 || j>n || s[i]==s[j])
            {
                c++;
            }
        }

    }

    cout<<c;
    
}


int main()
{
   solve();
    
    return 0;
}