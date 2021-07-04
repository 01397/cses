#include <bits/stdc++.h>
using namespace std;
int main() {
  long long N;
  cin >> N;
  long long sum = 0;
  for (int i = 0; i < N - 1; i++) {
    int x;
    cin >> x;
    sum += x;
  }
  cout << (N * (N + 1) / 2 - sum) << endl;
}