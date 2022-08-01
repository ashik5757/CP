#include<bits/stdc++.h>

using namespace std;




int main() {


    int n,t;
    cin >> n >> t;

    string s;
    cin >> s;

    for(int k=0; k<t; k++) {
        for(int i=0; i<n-1; i++) {
            if(s.at(i)=='B' && s.at(i+1)=='G') {
                swap(s.at(i),s.at(i+1));
                i++;
            }
        }
    }

    cout << s << endl;
    



    system("pause");

    return 0;


}