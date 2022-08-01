#include<bits/stdc++.h>

using namespace std;

int main() {


   
    int a,b;
    cin >> a >> b;

    int s = 10;

    if((a%s)+1==b || (b%s)+1==a) {
        cout << "Yes" << endl;
    }

    else {
        cout << "No" << endl;
    }



    system("pause");

    return 0;

}