
#include<bits/stdc++.h>

using namespace std;




int main() {


    int n;
    cin >> n;

    while(n--){

        string num;
        cin >> num;

        int s1 = 0, s2 = 0;

        for(int i=0; i<3; i++) {
            s1+=num.at(i);
        }

        for(int i=3; i<6; i++) {
            s2+=num.at(i);
        }
        

        if(s1==s2)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;


    }


    



    system("pause");

    return 0;


}