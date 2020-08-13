#include <bits/stdc++.h>
using namespace std;
bool unique(string s)
{
    int n=s.size();
    if(n==0)
    {
        return false;
    }
    bool ch[26];
    memset(ch,0,sizeof(ch));
    for(int i=0;i<n;i++)
    {
        if(!ch[s[i]-'a'])
        {
            ch[s[i]-'a']=true;
        }
        else{
            return false;
        }
    }
    return true;

}
int main()
{
    string s;
    cin>>s;
    if(unique(s))
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}
