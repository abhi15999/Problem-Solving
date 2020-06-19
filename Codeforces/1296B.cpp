//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

long long t,s,c,x;

void solve()
{
    cin>>s;
    c=s;
    if(c<10)
    {
        cout<<s;
    }
    else
    {

      while(c>=10)
      {
         x=c;
         c-=10;
         c+=floor(x/10);
         s++;
      }
      cout<<s;   
    }
    cout<<"\n";
}

int main()
{ 
    cin>>t;
    while(t--)
    {
        solve();      
    }
  
  return 0;
}