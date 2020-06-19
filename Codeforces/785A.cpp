//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s=="Tetrahedron")
        {
            r+=4;
        }
        else if(s=="Cube")
        {
            r+=6;
        }
        else if(s=="Octahedron")
        {
            r+=8;
        }
          else if(s=="Dodecahedron")
        {
            r+=12;
        }
        else
        {
            r+=20;    
        }
    }

    cout<<r;

    return 0;
}