/*
| | | | |_| |__  ___  ___ | |__
| | | | __| '_ \/ __|/ _ \| '_ \
| |_| | |_| | | \__ \ (_) | |_) |
 \___/ \__|_| |_|___/\___/|_.__/
 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pi acos(-1)
 
int main()
{
    int t,cnt,r=0,g=0,b=0,ans,res;
    cin>>t;
    char s[t];
    cin>>s;
    for(int i=0;i<t;i++){
	if(s[i-1]==s[i])
    if(s[i]=='R'){
     ++r;
    }
    else if(s[i]=='G'){
     ++g;
    }
    else if(s[i]=='B'){
     ++b;
    }
    ans = r+g+b;
       }
       cout<<ans<<endl;
}
 
