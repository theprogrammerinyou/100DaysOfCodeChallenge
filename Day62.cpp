#include <bits/stdc++.h>
#define ll long long int
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;

void solve()
{
  string s;
  cin >> s;
  int n = s.length();
  f(i, n)
  {
    int count = 1;
    while(i < n - 1 && s[i] == s[i + 1])
   {
      count++;
      i++;
    }
    cout << count << s[i];
  }
}

int main()
{
  solve();
  return 0;
}