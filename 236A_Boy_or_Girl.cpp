#include<bits/stdc++.h>
using namespace std;

string s;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	cin>>s;
	set <char> name;
	
	for(int i=0;i<s.size();i++){
		name.insert(s[i]);
	}
	
	if(name.size()%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
	return 0;
}
