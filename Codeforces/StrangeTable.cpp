#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, m, x, res, t1, t2, t3;
    cin >> n >> m >> x;
    if ((x % n) == 0) {
      t1 = x / n;
    } else
      t1 = (x / n) + 1;

    t2 = x - ((t1 - 1) * n);

    t3 = m * (t2 - 1);

    res = t3 + t1;
    cout << res << endl;
  }
}