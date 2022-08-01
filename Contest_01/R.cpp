#include<bits/stdc++.h>

using namespace std;

int main() {


    int x;
    cin >> x;

    int m = (x/100);
    int r = 100 - (x-(m*100));

    cout << r << endl;



    system("pause");

    return 0;

}