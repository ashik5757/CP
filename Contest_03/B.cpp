#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int t,y;
    string x;

    map<string,int> m;
    map<string,int>::iterator it;

    for(int i=1; i<=n; i++) {

        cin >> t;

        if(t==1) {
            cin >> x >> y;
            it = m.find(x);

            if(it!=m.end())
                it->second+=y;
            else
                m.insert(make_pair(x,y));

        }

        else if(t==2) {
            cin >> x;
            it = m.find(x);

            if(it!=m.end())
                m.erase(it);
        }

        else if(t==3) {
            cin >> x;
            it = m.find(x);

            if(it!=m.end())
                cout << it->second << endl;
            else
                cout << "0" << endl;
        }
    }






    system("pause");

    return 0;

}