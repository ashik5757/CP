#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        map<char,int> mp;
        map<char,int>::iterator it;

        char s[500];
        string res;
        cin >> s;

        for(int i=0; i<strlen(s); i++) {

            if(s[i]==s[i+1])
                i++;
            else
                mp[s[i]]++;

        }

        for(it=mp.begin(); it!=mp.end(); it++) {
            if(it->second>0)
                res.push_back(it->first);
        }

        cout << res << endl;

    }





    system("pause");

    return 0;

}