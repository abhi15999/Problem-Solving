#include <bits/stdc++.h>

#define loop(i, a, n) for(int i=a; i<n; i++)
#define loopv(it,a) for(auto it:a)
#define ll long long
#define pf(a) printf("%d",a)
#define pfs(a) printf("%s",a)
#define pfl(a) printf("%lld",a)
#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define pb(a) push_back(a)
using namespace std;
int n,q,d,x,minimum;
int main() 
{
 	sf(n);sf(q);
 	vector<int>a;
 	loop(i,0,n)
 	{
 		sf(x);
 		a.pb(x);
 	}

 	while(q--)
 	{	
 		int ans=0;
 		deque<int>de;	
 		sf(d);
 		loop(i,0,d)
 		{
 			if(de.empty())
 			{
 				de.push_front(i);
 				continue;
 			}
 			while(1)
 			{
 				if(de.empty())
 				{
 					de.push_front(i);
 					break;
 				}
 				if(a[de.front()]<a[i])
 				{
 					de.pop_front();
 				}
 				else
 				{
 					de.push_front(i);
 					break;
 				}

 			}
 		}
 		ans=a[de.back()];

 		loop(i,d,n)
 		{
 			while(!de.empty() && de.back()<=i-d)
 			{
 				de.pop_back();
 			}
 			while(1)
 			{
 				if(de.empty())
 				{
 					de.push_front(i);
 					break;
 				}
 				if(a[de.front()]<a[i])
 				{
 					de.pop_front();
 				}
 				else
 				{
 					de.push_front(i);
 					break;
 				}
 			}
 			ans=min(ans,a[de.back()]);
 		}

 		cout<<ans<<endl;	 		
 	}
    
	 return 0;
}

   
