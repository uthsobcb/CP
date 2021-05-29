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
	int t;
	cin>>t;
	while(t--){
		ll n,ans=0;
		cin>>n;
		int ar[n],br[n], min_a=INT_MAX,min_b=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>ar[i];
			min_a=min(min_a,ar[i]);
		}
		for(int i=0;i<n;i++){
			cin>>br[i];
			min_b=min(min_b,br[i]);
		}
		
		for(int i=0;i<n;i++) ans+=max(ar[i]-min_a,br[i]-min_b);
		cout<< ans <<endl;
	}
}
