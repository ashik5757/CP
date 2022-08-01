#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    stack<string> s;
    map<string,int> mark;

    for(int i=0; i<n; i++) {
        string ss;
        cin >> ss;
        s.push(ss);
    }

    //cout << endl;

    for(int i=0; i<n; i++) {

        if(mark[s.top()]==0) {
            cout << s.top() << endl;
            mark[s.top()] = 1;
            s.pop();
        }
        else
            s.pop();
    }





    system("pause");

    return 0;

}