#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> res;


    while(true) {

        long long n;
        cin >> n;

        if(n==0)
            break;
        

        while(n>=10) {

            long long sum = 0;
            while(n) {
                sum+=n%10;
                n = n/10;
            }

            n = sum;
        }

        res.push_back(n);
    }


    for(int r : res) {
        cout << r << endl;
    }


    system("pause");

    return 0;

}