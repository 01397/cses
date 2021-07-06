#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int main() {
  ll n;
  cin >> n;

  vector<bool> v(n + 1, true);
  ll total = n * (1 + n) / 2;

  if (total % 2 == 1) {
    cout << "NO" << endl;
    return 0;
  } else {
    cout << "YES";
  }

  ll half = total / 2;

  ll sum = 0;
  int count = 0;
  for (int i = n; i > 0; i--) {
    if (half - sum > i) {
      sum += i;
      v[i] = false;
      count++;
    } else {
      v[half - sum] = false;
      count++;
      break;
    }
  }
  cout << "\n" << count << "\n";
  for (int i = 1; i <= n; i++) {
    if (v[i] == false) cout << i << " ";
  }
  cout << "\n" << (n - count) << "\n";
  for (int i = 1; i <= n; i++) {
    if (v[i] == true) cout << i << " ";
  }
  cout << endl;
}