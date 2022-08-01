#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    string s2;
    s2.push_back(s.at(1));
    s2.push_back(s.at(2));
    s2.push_back(s.at(0));    

    cout << s2 << endl;


    system("pause");

    return 0;

}