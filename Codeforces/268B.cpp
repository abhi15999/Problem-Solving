    //Abhishek Gupta | TCET,Mumbai | BE.IT

    #include <bits/stdc++.h>
    
    using namespace std;

    int n,c;

    void solve()
    {
        cin>>n;
        for(int i =1;i<=n-1;i++)
        {
            c+=(n-i)*i;
        }
        cout<<c+n;
    }
    
    int main()
    {
        solve();
    
    return 0;
    }