#include<bits/stdc++.h>

using namespace std;




int main() {


    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for(int i=0; i<s.length()-1; i++) {

        if(s.at(i)==s.at(i+1))
            count++;
    }


    cout << count << endl;



    system("pause");

    return 0;


}