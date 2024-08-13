#include<bits/stdc++.h>
using namespace std;

long long n,m,a;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>m>>a;
    long long c=(n+a-1)/a;
    long long d=(m+a-1)/a;
    cout<<c*d;
    
	//cout<<ceil((float)n/a)*ceil((float)m/a);
	return 0;
}
