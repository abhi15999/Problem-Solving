//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,x=0;
    cin>>n;
    string a,b;

    while(n--)
    {
        if(x!=0)
        {   
            cin>>a;
            if(a==b)
            {
                x+=1;
            }
            else
            {
                x-=1;
            }
        }
        else
        {
            cin>>b;
            x=1;
        }
        
    }

    cout<<b;
    
    return 0;
}
