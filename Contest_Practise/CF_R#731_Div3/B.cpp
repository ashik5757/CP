#include<bits/stdc++.h>

using namespace std;

int main() {


    int t;
    cin >> t;

    for(int i=0; i<t; i++) {

        string s;
        cin >> s;

        sort(s.begin(),s.end());

        bool alpha = true;

        for(int j=0; j<s.length()-1; j++) {

            if(s.length()==1 && s.at(0)=='a') {
                //alpha = true;
                break;
            }

            else if(s.length()==1 && s.at(0)!='a') {
                alpha = false;
                break;
            }

            else if(s.at(j)+1 != s.at(j+1)){
                alpha = false;
                break;
            }
        }


        if(alpha)
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;

    }




    system("pause");

    return 0;

}