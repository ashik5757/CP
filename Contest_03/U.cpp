#include<bits/stdc++.h>

using namespace std;

int main() {


    int n;
    cin >> n;

    map<string,int> mp;
    map<string,int>::iterator it;

    for(int i=0; i<n; i++) {

        string s1, s2;
        cin >> s1;

        mp[s1]++;

        getline(cin,s2);

    }


    for(it=mp.begin(); it!=mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }



    system("pause");

    return 0;

}