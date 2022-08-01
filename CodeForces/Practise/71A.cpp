#include<iostream>

using namespace std;



int main() {


    int n;
    cin >> n;

    string w[n];

    for(int i=0; i<n; i++) {
        cin >> w[i];
    }


    for(int i=0; i<n; i++) {
        
        if(w[i].length()<=10) {
            cout << w[i] << endl;
        }

        else {
            cout << w[i].front() << w[i].length()-2 << w[i].back() << endl;
        }
    }

    


    system("pause");
    return 0;


}