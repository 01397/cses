#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

ll calc(int n, ll p) {
  ll nn = n * n;
  ll d1 = (nn - 5) * 4 + (nn - 7) * 4 + (nn - 9) * (2 * n - 9);
  ll d2 = (2 * n - 1) * (2 * n - 2) / 2 - 2 * 4 - 8 * (n - 3);
  return p + d1 - d2;
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
  for (int i = 9; i <= N; i++) {
    p = calc(i, p);
    cout << p << "\n";
  }
  return 0;
}
