#include<bits/stdc++.h>

using namespace std;


int main() {


    string res[100];

    int i = 0;
    while(true) {

        string s;
        getline(cin,s);

        if(s=="*")
            break;
        
        if(s=="Hajj")
            res[i] = "Hajj-e-Akbar";
        
        else if(s=="Umrah")
            res[i] = "Hajj-e-Asghar";

        i++;
    }

    for(int l=0; l<i; l++) {
        cout << "Case " << l+1 << ": " << res[l] << endl;
    }


    system("pause");

    return 0;

}