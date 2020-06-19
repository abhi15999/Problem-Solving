//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

long long n,m,ans=0;
pair<int,int>a[100];
// map<int,int>::iterator it;

void solve()
{
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {   
        cin>>a[i].first>>a[i].second;
        // a.insert({c,d});        
    }
    sort(a,a+n);
    reverse(a,a+n);

        for(int i=0;i<m;i++)
        {
            if(a[i].first<=n)
            {
                ans+=(a[i].first)*(a[i].second);
                n-=a[i].first;
            }
            else
            {
                ans+=n*a[i].second;
                n=0;
            }

            if(n<=0)
            {
                break;
            }
        }
    

    cout<<ans;
}

int main()
{
   solve();
    
    return 0;
}