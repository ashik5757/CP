#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    if((n*1.08)<206)
        cout << "Yay!" << endl;
    
    else if((int)(n*1.08)==206)
        cout << "so-so" << endl;
    
    else   
        cout << ":(" << endl;
    



    system("pause");

    return 0;

}