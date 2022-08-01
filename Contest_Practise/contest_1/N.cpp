#include<bits/stdc++.h>

using namespace std;

int main() {

    while(true) {

        int a,b;
        cin >> a >> b;


        if(a==-1 && b==-1)
            break;


        int diff = abs(a-b);
        int inv1 = a + (100-b);
        int inv2 = b + (100-a);
        int inv = min(inv1,inv2);
        

        cout << min(diff,inv) << endl;


    }






    system("pause");

    return 0;

}