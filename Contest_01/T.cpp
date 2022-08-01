#include<bits/stdc++.h>

using namespace std;

int main() {

    int v,t,s,d;
    cin >> v >> t >> s >> d;

    if(d < v*t)  
        cout << "Yes" << endl;
    else if(v*s < d)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;



    system("pause");

    return 0;

}