//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{ 
  int n,i,w,y;
  int d=0,e=0,f=0;
  queue<int>a,b,c;
  cin>>n;
  for(i=1;i<=n;i++)
  {
      cin>>y;
      if(y==1) 
      {d++;a.push(i);}
      else if(y==2) 
      {e++;b.push(i);}
      else if(y==3) 
      {f++;c.push(i);}
  }
  w=min(d,min(e,f));
  cout<<w<<endl;
  while(w--)
  {
    cout<<a.front()<<" "<<b.front()<<" "<<c.front()<<endl;
    a.pop();
    b.pop();
    c.pop();
  }
 
 
  return 0;
}