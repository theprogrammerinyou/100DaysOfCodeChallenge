#include <bits/stdc++.h>
#define ll long long int
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;

bool solve(string s)
{
  int sum = 0;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '(')
      sum += 1;
    else
      sum -= 1;

    if (sum < 0)
      break;
  }

  if (sum != 0)
    return false;

  return true;
}

int main()
{
  string t;
  cin >> t;
  solve(t);
}