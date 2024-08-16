#include<bits/stdc++.h>
using namespace std;

char a[51];
int n, s=0;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	cin>>n;
	
	cin>>a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		if(a[i]==a[i-1]) s++;	
	}
	cout<<s;
	return 0;
}
