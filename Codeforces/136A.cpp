//Abhishek Gupta | TCET,Mumbai | BE.IT

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int n, x, i;
   cin >> n;
   vector<int> a(n + 1);
 
   for (i = 1; i <= n; i++)
   {
      cin >> x;
      a[x] = i;
   }
 
   for (i = 1; i <= n; i++)
   {
      cout << " " << a[i];
   }
 
   return 0;
}