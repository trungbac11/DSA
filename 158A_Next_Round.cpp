#include<bits/stdc++.h>
using namespace std;

int n, k, s=0, ss=0, a[101];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ss=ss+a[i];
		if(a[i]>=a[k]&&a[i]>0) s++;
	}
	if(ss==0) cout<<"0";
	else cout<<s;	
	return 0;
}
