#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, sides[3];
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> sides[0] >> sides[1] >> sides[2];
    sort(sides, sides + 3);
    int hypo_square = sides[2] * sides[2];
    int other_square = sides[0] * sides[0] + sides[1] * sides[1];
    cout << "Case " << i << ": " << (hypo_square == other_square ? "yes" : "no") << "\n";
  }
  return 0;
}