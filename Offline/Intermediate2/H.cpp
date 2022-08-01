#include<bits/stdc++.h>

using namespace std;

#define ll long long;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        string s[n];
        
        for(int i=0; i<n; i++) {
            cin >> s[i];
        }

        set<string> set(s,s+n);

        for(int i=0; i<n; i++) {
            int bin = 0;
            for(int j=0; j<s[i].size(); j++) {
                if(set.count(s[i].substr(0,j))==1 && set.count(s[i].substr(j,s[i].size()-1))==1) 
                    bin = 1; 
            }
            cout << bin;
        }
        cout << endl;

    }






    system("pause");

    return 0;

}