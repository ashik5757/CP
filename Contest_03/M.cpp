#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    for(int i=0; i<t; i++) {

        long long n,m;
        cin >> n >> m;

        map<long long,long long> mp;

        long long a;
        for(long long j=1; j<=n; j++) {

            cin >> a;
            mp[a]++;
        }

        for(int j=1; j<=m; j++) {
            cin >> a;
            mp[a]++;

            if(mp[a]>1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

    }


    system("pause");

    return 0;

}