#include<bits/stdc++.h>

using namespace std;

int main() {


    int t;
    cin >> t;

    for(int i=0; i<t; i++) {

        cout << endl;

        int a1,a2,b1,b2,f1,f2;

        cin >> a1 >> a2;
        cin >> b1 >> b2;
        cin >> f1 >> f2;



        int d = abs(a1-b1)+abs(a2-b2);

        if(a1!=b1 && a2!=b2) 
            cout << d << endl;
        
        else if(d==abs(a1-f1)+abs(a2-f2)+abs(b1-f1)+abs(b2-f2))
            cout << d+2 << endl;
        else
            cout << d << endl;



    }






    system("pause");

    return 0;

}