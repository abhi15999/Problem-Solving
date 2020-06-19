//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l,r,i,a;
    cin>>l>>r;
    a=l;
    if(r-l>1)
    {
        a++;
        for(i=a;i<r;i++)
        {
            if(__gcd(l,i)==1 && __gcd(i,r)==1)
            {
                if(__gcd(l,r)!=1)
                cout<<l<<" "<<i<<" "<<r;
                return 0;
            }
            else
            {
                cout<<"-1";
                return 0;
            }
            
        }
    }
    else
    {
        cout<<"-1";
    }
    
    return 0;
}