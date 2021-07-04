#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int main() {
  int N;
  int last = 0;
  int x = 0;
  ll sum = 0;
  cin >> N >> last;
  while (cin >> x) {
    if (x <= last) {
      sum += last - x;
    } else {
      last = x;
    }
  }
  cout << sum << endl;
}