//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int main()
{   
    long long n,i;cin>>n;
    long long a[n],c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int max=a[n-1];
    int min=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>min && a[i]<max)
        {
            c++;
        }
    }

    cout<<c;
    return 0;
}
