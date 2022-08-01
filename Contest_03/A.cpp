#include<bits/stdc++.h>

using namespace std;

int main() {


    int n;
    cin >> n;

    int y,x;
    set<int> s;
    
    for(int i=1; i<=n; i++) {
        cin >> y >> x;

        if(y==1)
            s.insert(x);
            
        else if(y==2) {
            set<int>::iterator it;
            it = s.find(x);
            if(it!=s.end())
                s.erase(it);
        }

        else if(y==3) {
            set<int>::iterator it;
            it = s.find(x);

            if(it!=s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

    }




    system("pause");

    return 0;

}