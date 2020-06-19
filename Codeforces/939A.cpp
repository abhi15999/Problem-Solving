//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i,n;cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[n];
    }
    for(i=1;i<=n;i++)
    {
        if(a[a[a[i]]]==i)
        {
            cout<<"YES";
            return 0;
        }
    }
    
    cout<<"NO";

   return 0;
}
