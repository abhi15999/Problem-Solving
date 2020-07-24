#include <bits/stdc++.h>
#define ll long long
using namespace std;
int freq[20005];
int main()
{
    std::ios::sync_with_stdio(false);
    ll T;
    cin >> T;
    while(T--)
    {
      for (int i = 0; i < 20005; ++i)
      {
        freq[i]=0;
      }
      int n;
      cin>>n;
      bool flag=false;
      vector<ll>a(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }

      sort(a.begin(), a.end());

      for (int i = 0; i < n; ++i)
      {
        freq[a[i]]++;
        if(freq[a[i]]>2)
        {
          cout<<"NO"<<endl;
          flag=true;
          break;
        }
        if(i==n-1 && freq[a[i]]==2)
        {
          cout<<"NO"<<endl;
          flag=true;
          break;
        }
      }


      if(!flag)
      {
        cout<<"YES"<<endl;
        for (int i = 0; i < n; ++i)
        {
          if(freq[a[i]]>1)
          {
            cout<<a[i]<<" ";
            freq[a[i]]--;
          }
        }
        for (int i = n-1; i >= 0 ; --i)
        {
          if(freq[a[i]]==1)
          {
            cout<<a[i]<<" ";
            freq[a[i]]--;
          }
        }
        cout<<endl;
      }



    }

    return 0;
}