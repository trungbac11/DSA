#include<bits/stdc++.h>
using namespace std;

string s;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	cin>>s;
	
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	
	for(int i=0;i<s.size();i++){
		if(s[i]!='e' && s[i]!='u' && s[i]!='o' && s[i]!='a' && s[i]!='i' && s[i]!='y') cout<<"."<<s[i];
	}
	return 0;
}
