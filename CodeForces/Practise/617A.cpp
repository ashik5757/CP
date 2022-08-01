#include<bits/stdc++.h>

using namespace std;




int main() {

    int n;
    cin >> n;
    
    if(n<=5) 
        cout << "1" << endl;
    
    else 
        cout << ceil(n/5.0) << endl;
    

    system("pause");

    return 0;


}