#include<bits/stdc++.h>

using namespace std;

int main() {


    int n;
    cin >> n;

    int r = n-10;
    int count = 0;


    if(r>=1 && r<=9 || r==11)
        cout << "4" << endl;
    else if(r==10)
        cout << "15" << endl;
    else
        cout << "0" << endl;


    system("pause");

    return 0;

}