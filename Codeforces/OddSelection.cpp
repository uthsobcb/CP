#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int o = 0, e = 0;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (v[i] & 1)
        o++;
      else
        e++;
    }
    int a = 0;
    for (int i = 10001; i >= 1; i -= 2) {
      if (i <= x && i <= o) {
        a = i;
        break;
      }
    }
    x -= a;
    if (e >= x && o)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}