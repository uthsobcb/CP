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
	int t,a,b,s;
	cin>>t;
	while(t--){
		cin>>a>>b;
		s=a-b;
	      if(a < b)
            cout << b-a << endl;

        else if(a % 2 == b % 2)
            cout << 0 << endl;

        else
            cout << 1 << endl;
    }

	}
