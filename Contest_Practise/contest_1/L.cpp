#include<bits/stdc++.h>

using namespace std;


int word_value(string s) {

    int i = 0;

    if(s.at(0)=='o' && s.at(0)!='t') 
        i++;
    if(s.at(1)=='n' && s.at(1)!='w')
        i++;
    if(s.at(2)=='e' && s.at(2)!='0')
        i++;    

    if(i>=2)
        return 1;
    else
        return 2;


}

int main() {

    int t;
    cin >> t;

    while(t--) {

        string s;
        cin >> s;

        if(s.size()==3) {
            cout << word_value(s) << endl;
        }

        else 
            cout << "3" << endl;


    }






    system("pause");

    return 0;

}