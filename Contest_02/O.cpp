#include<bits/stdc++.h>

using namespace std;

int main() {


    string a,b;
    cin >> a >> b;

    for(int i=0; i<a.length(); i++) {
        a[i] = tolower(a.at(i));
        b[i] = tolower(b.at(i));
    }

    cout << a.compare(b) << endl;



    system("pause");

    return 0;

}