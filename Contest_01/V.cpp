#include<bits/stdc++.h>

using namespace std;

bool isPal(string s) {
    
    string temp = s;
    reverse(temp.begin(),temp.end());
    
    if(s==temp)
        return true;
    else
        return false;

}

int main() {

    int n;
    cin >> n;

    string s = to_string(n);

    

    if(isPal(s))
        cout << "Yes" << endl;
    
    else {

        string ss;

        int i = s.length()-1;
        while(s.at(i)=='0') {        
            //s.insert(s.begin(),'0');
            ss.push_back('0');
            i--;
        }

        ss.append(s);

        //cout << ss << endl;

        if(isPal(ss))
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;



    }



    system("pause");

    return 0;

}