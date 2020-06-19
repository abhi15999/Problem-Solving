//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, flag=0, p;
    cin >> n >> m;
    p=n;
    
    while(flag==0)
    {
        p++;
        flag=1;

        for(i=2;i<p;i++)
        {
            if(p%i==0)
            {
                flag=0;
            }
        }
    }
    if(p==m)cout<<"YES";
    else cout<<"NO";
    return 0;
}