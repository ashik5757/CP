#include<bits/stdc++.h>

using namespace std;




int main() {

    int n;
    cin >> n;

    int count = 0;

    while(n!=0) {

        if(n/100!=0) {
            n = n-100;
            count++;
        }

        else if(n/20!=0) {
            n = n-20;
            count++;
        }

        else if(n/5!=0) {
            n = n-5;
            count++;
        }

        else if(n/1!=0) {
            n = n-1;
            count++;
        }

    }

    cout << count << endl;
    



    system("pause");

    return 0;


}