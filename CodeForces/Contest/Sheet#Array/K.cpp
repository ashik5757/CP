#include<bits/stdc++.h>

using namespace std;




int main() {

    int n;
    cin >> n;

    string num;
    cin >> num;

    int sum = 0;

    

    for(int i = 0; i<n; i++) {
        sum+=num.at(i)-'0';
    }


    cout << sum << endl;




    



    system("pause");

    return 0;


}