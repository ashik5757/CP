#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    string t[2];
    int t1 = 0, t2 = 0;

    string s[n];
    for(int i=0; i<n; i++) {
        cin >> s[i];

        if(i==0) {
            t[0] = s[i];
            t1++;
        }
        
        else if(s[i]==t[0])
            t1++;
        
        else if(s[i]==t[1])
            t2++;

        else if(s[i]!=t[0]) {
            t[1] = s[i];
            t2++;
        }

    }


    if(t1>t2) 
        cout << t[0] << endl;
    else 
    cout << t[1] << endl;



    system("pause");

    return 0;

}