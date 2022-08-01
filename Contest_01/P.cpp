#include<bits/stdc++.h>

using namespace std;

int main() {

    string s,t;
    cin >> s >> t;

    int a = 0, b = s.length()-1;
    bool found = false;

    if(s.length()!=t.length()) 
        found = true;

    else {
        
        for(int i=0; i<s.length(); i++) {
            if(s.at(a)!=t.at(b)) {
                found = true;
                break;
            }
        
            a++;
            b--;
        }
    }


    if(!found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;




    system("pause");

    return 0;

}