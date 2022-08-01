#include<iostream>
#include<string.h>
#include<string>

using namespace std;




int main() {


    string s1;
    string s2;

    cin >> s1 >> s2;


    for(int i=0; i<s1.length(); i++) {
        s1[i] = tolower(s1.at(i));
        s2[i] = tolower(s2.at(i));
    }

    cout << s1.compare(s2) << endl;


    system("pause");
    
    return 0;


}