#include<bits/stdc++.h>

using namespace std;




int main() {

    int n;
    cin >> n;

    int count = 0;

    // while(n!=0) {

    //     if(n/100!=0) {
    //         n = n-100;
    //         count++;
    //     }

    //     else if(n/20!=0) {
    //         n = n-20;
    //         count++;
    //     }

    //     else if(n/10!=0) {
    //         n = n-10;
    //         count++;
    //     }

    //     else if(n/5!=0) {
    //         n = n-5;
    //         count++;
    //     }

    //     else if(n/1!=0) {
    //         n = n-1;
    //         count++;
    //     }

    // }


    if(n/100!=0) {
        count += n/100;
        n = n%100;
    }

    if(n/20!=0) {
        count += n/20;
        n = n%20;
    }

    if(n/10!=0) {
        count += n/10;
        n = n%10;
    }

    if(n/5!=0) {
        count += n/5;
        n = n%5;
    }

    if(n/1!=0) {
        count += n/1;
        n = n%1;
    }

    cout << count << endl;
    



    system("pause");

    return 0;


}