#include<bits/stdc++.h>
using namespace std;

int n, result=0;
string s;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>s;
    	if(s[0]=='+') ++result;
    	else if(s[0]=='-') --result;
    	else if(s[2]=='+') result++;
    	else if(s[2]=='-') result--;
	}
	
	cout<<result;
	return 0;
}
