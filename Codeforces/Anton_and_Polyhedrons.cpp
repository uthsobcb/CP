#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pi acos(-1)
#define FAST  ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
 
int main(){
	FAST
	int t,ans=0;
	cin>>t;
	while(t--){
		int tt=4,c=6,o=8,d=12,i=20;
		string s;
		cin>>s;
		if(s == "Tetrahedron"){
			ans= ans+tt;
		}
		else if(s == "Cube"){
			ans= ans+c;
		}
		else if(s == "Octahedron"){
			ans= ans+o;
		}
		else if (s == "Dodecahedron"){
			ans= ans+d;
		}
		else if(s == "Icosahedron"){
			ans= ans+i;
		}
	}
	cout<<ans++<<endl;
}
