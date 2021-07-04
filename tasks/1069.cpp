#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main() {
  string str;
  char l;
  int max = 0;
  int a = 0;

  cin >> str;
  for (int i = 0; i < str.size(); i++) {
    char c = str[i];
    if (c == l) {
      a++;
    } else {
      if (max < a) max = a;
      a = 1;
    }
    l = c;
  }
  if (max < a) max = a;
  cout << max << endl;
}