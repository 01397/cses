
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

ll calc(ll n) {
  ll nnc2 = (n * n) * (n * n - 1) / 2;
  ll d =
      2 * 4 + 3 * 8 + 4 * (n - 3) * 4 + 6 * (n - 4) * 4 + 8 * (n - 4) * (n - 4);
  return nnc2 - d / 2;
}

int main() {
  int N;
  cin >> N;
  cout << 0 << "\n";
  if (N == 1) return 0;
  cout << 6 << "\n";
  if (N == 2) return 0;
  cout << 28 << "\n";
  if (N == 3) return 0;
  cout << 96 << "\n";
  if (N == 4) return 0;
  cout << 252 << "\n";
  if (N == 5) return 0;
  cout << 550 << "\n";
  if (N == 6) return 0;
  cout << 1056 << "\n";
  if (N == 7) return 0;
  cout << 1848 << "\n";
  if (N == 8) return 0;
  ll p = 1848;
  for (ll i = 9; i <= N; i++) {
    p = calc(i);
    cout << p << "\n";
  }
  return 0;
}
