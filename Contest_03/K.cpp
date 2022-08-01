#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    set<string> s;
    
    set<char>::iterator it;

    for(int i=0; i<n; i++) {
        string t;
        cin >> t;

        set<char> ch;

        for(int j=0; j<t.size(); j++) {
            ch.insert(t.at(j));
        }

        string w;
        for(it=ch.begin(); it!=ch.end(); it++) {
            w.push_back(*it);
        }

        s.insert(w);
    }


    cout << s.size() << endl;




    system("pause");

    return 0;

}