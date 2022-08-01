#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v;
    map<int,int> m,mark;

    int i = 0;
    while(true) {
        int val;
        cin >> val;
        if(cin.eof())
            break;

        v.push_back(val);
        m[val]++;
        i++;
    }

    for(int i=0; i<v.size(); i++) {

        if(mark[v[i]]==0) {
            cout << v[i] << " " << m[v[i]] << endl;
            mark[v[i]] = 1;
        }
    }

    

    system("pause");

    return 0;

}