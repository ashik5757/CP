#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c;
    cin >> a >> b >> c;

    if(b-a==a-c)
        cout << "Yes" << endl;
    else if(c-b==b-a)
        cout << "Yes" << endl;    
    else if(b-c==c-a)
        cout << "Yes" << endl;     

    else
        cout << "No" << endl; 


    system("pause");

    return 0;

}