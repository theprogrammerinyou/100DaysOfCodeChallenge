#include <bits/stdc++.h>
#define ll long long int
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;

void solve()
{
  int x, y, b;
  cin >> x >> y >> b;
  cout << (x * b || y * (1 - b));
}

int main()
{
  solve();
  return 0;
}