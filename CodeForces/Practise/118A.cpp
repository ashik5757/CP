#include<bits/stdc++.h>

using namespace std;




int main() {


    string s;
    cin >> s;

    vector<char> v;

    for(int i=0; i<s.length(); i++) {

        // if(s.at(i)=='A' || s.at(i)=='a' || s.at(i)=='O' || s.at(i)=='o' || s.at(i)=='Y' || s.at(i)=='y' || s.at(i)=='U' || s.at(i)=='u' || s.at(i)=='I' || s.at(i)=='i' || s.at(i)=='E' || s.at(i)=='e') 
        //     continue; 

        if(s.at(i)=='A' || s.at(i)=='a') {
            continue;
        }
        else if(s.at(i)=='O' || s.at(i)=='o') {
            continue;           
        }
        else if(s.at(i)=='Y' || s.at(i)=='y') {
            continue;
        }
        else if(s.at(i)=='U' || s.at(i)=='u') {
            continue;
        }
        else if(s.at(i)=='I' || s.at(i)=='i') {
            continue;
        }
        else if(s.at(i)=='E' || s.at(i)=='e') {
            continue;
        }
        
        else {
            v.push_back('.');
            v.push_back(tolower(s.at(i)));
        }


    }


    for(char i : v) {
        cout << i;
    }
    cout << endl;


    system("pause");

    return 0;


}