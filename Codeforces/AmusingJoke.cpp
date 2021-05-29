#include<bits/stdc++.h> 
using namespace std;
int main() {
	long long i, s=0, array[4];
	for(i=0; i<4; i++) 
	cin>>array[i];
	sort(array, array+4);
	for(i=0; i<3; i++)
	if(array[i]==array[i+1])
	s++;
	cout<<s<<endl;
}
