#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    bool output = false;

    for(int i=0; i<s.length(); i++) {
        if(s.at(i)=='H' || s.at(i)=='Q' || s.at(i)=='9') {
            output = true;
        }

        else if(s.at(i)=='+') {
            s.at(i)++;
            if(s.at(i)=='H' || s.at(i)=='Q' || s.at(i)=='9')
                output = true;     
        }
    }


    if(output)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;



    system("pause");

    return 0;

}