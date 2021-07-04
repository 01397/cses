// TLE解法
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int getc(ll m) {
  ll r = 1;
  for (int i = 1; i < m; i++) {
    r += 2 * i;
  }
  return r;
}
int calc(int y, int x) {
  int m = max(x, y);
  ll c = getc(m);
  if (x == y) {
    return c;
  } else if (x < y) {
    if (x % 2 == 0) return c + (m - x);
    return c - (m - x);
  } else {
    if (x % 2 == 0) return c - (m - y);
    return c + (m - y);
  }
}
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    cout << calc(x, y) << "\n";
  }
  cout << endl;
}