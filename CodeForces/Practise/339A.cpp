#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<string>
#include<vector>

using namespace std;




int main() {


    string s;
    cin >> s;


    vector<int> v;

    for(int i=0; i<s.length(); i++) {
        if(isdigit(s.at(i))) {
            v.push_back(s.at(i)-48);
        }
    }

    sort(v.begin(),v.end(), greater<int>());

    
    while(!v.empty()) {
        cout << v.back();
        v.pop_back();

        if(!v.empty())
            cout << "+";
    }
    cout << endl;


    system("pause");
    
    return 0;


}