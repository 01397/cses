#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
ll calc(ll x, ll y) {
  if (x < y) {
    if (y % 2 == 0) {
      return y * y - (x - 1);
    } else {
      return (y - 1) * (y - 1) + 1 + (x - 1);
    }
  } else {
    if (x % 2 == 0) {
      return (x - 1) * (x - 1) + 1 + (y - 1);
    } else {
      return x * x - (y - 1);
    }
  }
}
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    ll x, y;
    cin >> y >> x;
    cout << calc(x, y) << "\n";
  }
  cout << endl;
}