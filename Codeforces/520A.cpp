//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n,i;cin>>n;
    string s;
    cin>>s;
    
    vector<bool>al(26,0);

    for(i=0;i<n;i++)
    {
        al[tolower(s[i])-'a']=1;   
    }
    for(i=0;i<26;i++)
    {
        if(al[i]==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
