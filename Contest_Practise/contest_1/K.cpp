#include<bits/stdc++.h>

using namespace std;



int main() {



    string res[3000];

    int i = 0;
    while(true) {

        string s;
        cin >> s;

        if(s=="#")
            break;
        
        if(s=="HELLO")
            res[i] = "ENGLISH";
        
        else if(s=="HOLA")
            res[i] = "SPANISH";

        else if(s=="HALLO")
            res[i] = "GERMAN";        

        else if(s=="BONJOUR")
            res[i] = "FRENCH";
        
        else if(s=="CIAO")
            res[i] = "ITALIAN";        
        
        else if(s=="ZDRAVSTVUJTE")
            res[i] = "RUSSIAN";        

        else 
            res[i] = "UNKNOWN";               
        
        
        i++;
    }

    for(int j=0; j<i; j++) {
        cout << "Case " << j+1 << ": " << res[j] << endl;
    }




    system("pause");

    return 0;

}