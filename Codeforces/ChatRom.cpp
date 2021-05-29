/**
| | | | |_| |__  ___  ___ | |__  
| | | | __| '_ \/ __|/ _ \| '_ \ 
| |_| | |_| | | \__ \ (_) | |_) |
 \___/ \__|_| |_|___/\___/|_.__/ 
                                
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pi acos(-1)
 
int main()
{
    string needle = "hello";
    string s;
    cin >> s;
    int len = s.length(), i, t = 0, j;
    for(j = 0, i = 0; (j < len) && (i < 5); j++)
    {
        if(needle[i] == s[j])
            i++;
    }
    if(i == 5) cout << "YES";
    else cout << "NO";
 
    return 0;
}
