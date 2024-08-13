#include <bits/stdc++.h>
using namespace std;

int t, n, m;

bool matches(const vector<int>& a, const string& s) {
    if (a.size() != s.size()) return false;

    unordered_map<char, int> charToNum;
    unordered_map<int, char> numToChar;

    for (int i = 0; i < a.size(); i++) {
        char ch = s[i];
        int num = a[i];

        if (charToNum.count(ch) && charToNum[ch] != num)
            return false;

        if (numToChar.count(num) && numToChar[num] != ch)
            return false;

        charToNum[ch] = num;
        numToChar[num] = ch;
    }
    return true;
}

int main() {
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        
        for(int i=0;i<n;i++){ 
            cin>>a[i];
        }

        cin>>m;
        while(m--){
            string s;
            cin>>s;
            if (matches(a, s)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

