#include<bits/stdc++.h>
using namespace std;

int a, b, i=0;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	cin>>a>>b;
	while(a<=b){
		a=3*a;
		b=2*b;
		i++;
	}
	
	cout<<i;
	return 0;
}
