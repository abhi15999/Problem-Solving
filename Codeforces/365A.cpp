//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n,k,x,a,c=0,r=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        a=floor(log10(x)+1);
        while(a--)
        {
            if(n%10<=k)
            {
                c++;
            }
            n/=10;
        }
        if(c==a)
        {
            r+=1;
        }
    }
    cout<<r;
    
    return 0;
}
