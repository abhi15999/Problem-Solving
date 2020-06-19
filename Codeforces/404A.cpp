//Abhishek Gupta | TCET,Mumbai | BE.IT
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    int i,n,j;
    set<char>b,c;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {   
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j || (n-j-1)==i)
            {
                b.insert(a[i][j]);
            }
            else
            {
                c.insert(a[i][j]);
            }
            
        }
    }

    if(b.size()==1 && c.size()==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    
 
   return 0;
}