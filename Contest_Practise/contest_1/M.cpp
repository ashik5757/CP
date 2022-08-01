#include<bits/stdc++.h>

using namespace std;



int main() {


    int t;
    cin >> t;

    string res[t];

    for(int i=0; i<t; i++) {

        int a,b,c;
        cin >> a >> b >> c;

        if(a<=20 && b<=20 && c<=20)
            res[i] = "good";
        else    
            res[i] = "bad";
                     
    }

    for(int j=0; j<t; j++) {
        cout << "Case " << j+1 << ": " << res[j] << endl;
    }




    system("pause");

    return 0;

}