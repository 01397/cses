#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int main() {
  int N;
  int MOD = 1000000007;

  cin >> N;
  ll ans = 1;

  for (int i = 0; i < N; i++) {
    ans = ans * 2 % MOD;
  }
  cout << ans << endl;
}