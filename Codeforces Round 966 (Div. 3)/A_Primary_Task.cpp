#include<bits/stdc++.h>
using namespace std;

int n;
string a;

int main(){
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a[0]=='1' && a[1]=='0'){
			if(a.size()>=5 || a.size()<=2) cout<<"NO"<<endl;
			else if(a[2]=='0') cout<<"NO"<<endl;
			else if(a[2]=='1' && a.size()<=3) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		} else cout<<"NO"<<endl;
	}
	
	return 0;
}
