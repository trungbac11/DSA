#include<bits/stdc++.h>
using namespace std;

int n,s,a,b,c;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n;
    for(int i=1;i<=n;i++){
		cin>>a>>b>>c;
    	if((a+b+c)>=2) s++;
	}
	
	cout<<s; 
	return 0;
}
