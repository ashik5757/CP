#include<bits/stdc++.h>

using namespace std;

int main() {

    char c[10];
    int a,b;

    cin >> c;
    cin >> a >> b;

   
    char temp = c[a-1];
    c[a-1] = c[b-1];
    c[b-1] = temp;

    cout << c << endl;

    system("pause");

    return 0;

}