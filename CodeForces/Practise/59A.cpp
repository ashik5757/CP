#include<bits/stdc++.h>

using namespace std;




int main() {


    string s;
    cin >> s;

    int l=0,u=0;

    for(int i=0; i<s.length(); i++) {
        if(islower(s.at(i)))
            l++;
        else
            u++;
    }
    

    if(l>=u) {
        for(int i=0; i<s.length(); i++) {
            s.at(i) = tolower(s.at(i));
        }
    }

    else {
        for(int i=0; i<s.length(); i++) {
             s.at(i) = toupper(s.at(i));
        }
    }

    cout << s << endl;

    system("pause");

    return 0;


}