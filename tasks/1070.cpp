#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int main() {
  int n;
  string out = "";
  cin >> n;
  if (n == 2 || n == 3) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  for (int i = 2; i <= n; i += 2) {
    cout << i << ' ';
  }
  for (int i = 1; i <= n; i += 2) {
    cout << i << ' ';
  }
  cout << endl;
}