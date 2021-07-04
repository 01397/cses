#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main() {
  string str;
  int max = 0;
  int a = 1;
  cin >> str;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == str[i + 1]) {
      a++;
    } else {
      if (max < a) max = a;
      a = 1;
    }
  }
  cout << max << endl;
}