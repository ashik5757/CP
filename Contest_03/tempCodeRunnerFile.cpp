#include<bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;

    map<int,int> mp;
    

    for(int i=0; i<n; i++) {

        map<int,int>::iterator it;

        int a;
        cin >> a;
        mp[a]++;

        a--;

        for(int j=0; j<=i; j++) {
            it = mp.find(a);
            if(it!=mp.end())
                break;
            a--;
        }

        if(it!=mp.end()) 
            cout << a << endl;
        else
            cout << "-1" << endl;



    }






    system("pause");

    return 0;

}