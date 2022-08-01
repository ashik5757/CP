#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int s=0,d=0;

    for(int i=0; i<n; i++) {

        if((i+1)%2!=0) {
            if(v.back()>v.front()){
                s+=v.back();
                v.pop_back();
            }
            else {
                s+=v.front();
                v.erase(v.begin());
            }
        }

        else {
            if(v.back()>v.front()){
                d+=v.back();
                v.pop_back();
            }
            else {
                d+=v.front();
                v.erase(v.begin());
            }
        }
            
    }

    cout << s << " " << d << endl;





    system("pause");

    return 0;

}