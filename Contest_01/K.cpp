#include<bits/stdc++.h>

using namespace std;

int main() {


    string name;
    cin >> name;

    int count = 0;

    for(int i=0; i<name.length(); i++) {
        for(int j=i+1; j<name.length(); j++) {
            if(name.at(i)==name.at(j)) {
                count++;
                break;
            }
        }
    }

    //cout << name.length() << " " << count << " " << name.length()-count << endl;

    if((name.length()-count)%2==0)
        cout << "CHAT WITH HER!" << endl;
    else 
        cout << "IGNORE HIM!" << endl;



    system("pause");

    return 0;

}