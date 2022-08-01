#include<bits/stdc++.h>

using namespace std;

int survive(int a, int b, int c) {

    int maxm = max({a,b,c});
    int mini = min({a,b,c});

    if(a!=maxm && a!=mini)
        return a;
    else if(b!=maxm && b!=mini)
        return b;
    else
        return c;

}

int main() {


    int t;
    cin >> t;

    int res[t];

    for(int i=0; i<t; i++) {


        int a,b,c;
        cin >> a >> b >> c;

        res[i] = survive(a,b,c);

    }


    for(int i=0; i<t; i++) {
        cout << "Case " << i+1 << ": " << res[i] << endl;
    }




    system("pause");

    return 0;

}