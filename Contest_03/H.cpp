#include<bits/stdc++.h>

using namespace std;

int main() {


    int n;
    cin >> n;

    map<int,int> mp;
    map<int,int>::iterator it;

    for(int i=0; i<n; i++) {
        int a;
        cin >> a;

        mp[a]++;
    }


    int count = 0;

    for(it=mp.begin(); it!=mp.end(); it++) {
        count = max(count,it->second);
    }


    cout << count << endl;



    system("pause");

    return 0;

}