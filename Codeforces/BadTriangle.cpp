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
 
int main()
{  
	FAST
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int ar[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>ar[i];
		}
		if(ar[0]+ar[1]<=ar[n-1]){
			cout<<"1 2 "<<n<<endl;
		}
		else cout<<-1<<endl;
	}
}
