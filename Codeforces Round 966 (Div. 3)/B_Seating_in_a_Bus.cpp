#include<bits/stdc++.h>
using namespace std;

int t,n;

int main(){
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> a(n);
        unordered_set<int> occupied;
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        bool follows = true;
        
        for (int i=0;i<n;i++){
            if(i==0||occupied.count(a[i]-1)>0||occupied.count(a[i]+1)>0) occupied.insert(a[i]);
    		else{
                follows=false;
                break;
            }
        }

        if(follows) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
    return 0;
}

