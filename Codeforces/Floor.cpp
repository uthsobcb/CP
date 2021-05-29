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
#define FAST  ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
 
int main(){
	FAST
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
	      if(n <= 2){
            cout << 1 << endl;
            continue;
        }
               int y = n - 2;
               y += x - 1;
               cout << y / x + 1 << endl;
 
	}
}
