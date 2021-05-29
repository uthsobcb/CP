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
 
bool IsPrime( int n )
{
    for ( int i = 2 ; i < n; i++ )
    {
        if ( n % i == 0 )return false;
    }
    return true;
}
int main()
{  
	FAST
   int n,k,p=0,cnt=0;
   vector<int> v;
   cin>>n>>k;
   for(int i=2;i<=n;i++){
   	if(IsPrime(i))(v.push_back(i));
   }
   for(int i = 0; i < v.size()-1; i++) {
         p = v[i]+v[i+1]+1;
        if(p <= n) {
            if(IsPrime(p))
             cnt++;
        }
        else break;
    }
    if(cnt>=k){
    	cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
