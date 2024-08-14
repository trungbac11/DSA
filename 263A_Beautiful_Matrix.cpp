#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				cout<<abs(3-i)+abs(3-j);
				break;
			}
		}
	}
	
	
	return 0;
}
