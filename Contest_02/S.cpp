#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    vector<string> vs;


    for(int k=1; k<=t; k++) {

        string arr[10][2];
        int m = 0;

        for(int i=0; i<10; i++) {
            cin >> arr[i][0] >> arr[i][1];
            m = max(m,stoi(arr[i][1]));
        }

        string msg = "Case #";
        msg+=to_string(k);
        msg+=":";
        vs.push_back(msg);

        for(int i=0; i<10; i++) {
            if(stoi(arr[i][1])==m)
                vs.push_back(arr[i][0]);
        }
    }


    for(string s : vs) {
        cout << s << endl;
    }


    system("pause");

    return 0;

}