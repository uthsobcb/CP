#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n; 
cin>>n; 
int a[2*n];
int b[n+1]={};
for(int i=0;i<2*n;i++){
cin>>a[i]; 
if(b[a[i]]==0) 
cout<<a[i]<<" "; 
b[a[i]]++;
}
cout<<endl;
}
}
