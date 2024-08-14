#include<bits/stdc++.h>
using namespace std;

string s;
int a[1001];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>s;
    int n=s.size();
    int j=0;
    for(int i=0;i<n;i++){
    	if(s[i]=='1'){
    		j++;
    		a[j]=1;
		}
    	else if(s[i]=='2'){
    		j++;
    		a[j]=2;
		}
    	else if(s[i]=='3'){
    		j++;
    		a[j]=3;
		}
	}
	sort(a+1,a+j+1);
	
	cout<<a[1];
	for(int i=2;i<=j;i++){
		cout<<"+"<<a[i];
	}
	
	return 0;
}
