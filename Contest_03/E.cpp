#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> s;
    set<int>::iterator it;


    while(n--) {
        int a;
        cin >> a;
        s.insert(a);
    }

    it = s.begin();
    it++;

    if(it!=s.end())
        cout << *it << endl;
    else
        cout << "NO" << endl;


    
    system("pause");

    return 0;

}