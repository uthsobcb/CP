#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		int l=(x/a);
		int k=(y/b);
		cout<<l+k<<endl;
	}
}