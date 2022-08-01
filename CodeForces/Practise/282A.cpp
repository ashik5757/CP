#include<iostream>

using namespace std;




int main() {

    int n;
    cin >> n;

    string s[n];

    for(int i=0; i<n; i++) {
        cin >> s[i];
    }

    int x = 0;
    for(int i=0; i<n; i++) {

        if(s[i] == "X++")
            x++;
        else if(s[i] == "++X")
            ++x;

        else if(s[i] == "X--")
            x--;
        else if(s[i] == "--X")
            --x;

    }

    cout << x << endl;


    system("pause");
    
    return 0;


}