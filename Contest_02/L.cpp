#include<bits/stdc++.h>

using namespace std;

int main() {


    string guest,host,pile;
    cin >> guest >> host >> pile;

    guest.append(host);

    sort(guest.begin(),guest.end());
    sort(pile.begin(),pile.end());

    if(guest.compare(pile)==0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;



    system("pause");

    return 0;

}