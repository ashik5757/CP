#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<string,int> m;

    for(int i=0; i<n; i++) {

        map<string,int>::iterator it;

        string s;
        cin >> s;

        it = m.find(s);

        if(it==m.end()) {
            m.insert(make_pair(s,1));
            cout << "OK" << endl;
        }

        else {
            s.append(to_string(it->second));
            m.insert(make_pair(s,++it->second));
            cout << s << endl;
        }

    
    }





    system("pause");

    return 0;

}