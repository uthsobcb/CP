#include <bits/stdc++.h>
using namespace std;
#define pi 2 * acos(0.0)
int main() {
  int i, t;
  double r, res, ans;
  cin >> t;
  for (i = 1; i < t + 1; i++) {
    cin >> r;
    res = 4 * (r * r);
    ans = res - (pi * r * r);
    printf("Case %d: %0.2lf\n", i, ans);
  }
}
