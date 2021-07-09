#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string url;
    cin >> url;
    string k;
    if (url[4] != 's')
      url.insert(4, "s");

    cout << "Case " << i + 1 << ": " << url << endl;
  }
}