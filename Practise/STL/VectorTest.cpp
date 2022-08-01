#include<bits/stdc++.h>

using namespace std;

void print(vector<int> v) {
    for(int i=0; i<v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v;

    int n,a;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a;
        v.push_back(a);
    }

    
    print(v);

    sort(v.begin(),v.end());

    print(v);

    sort(v.rbegin(),v.rend());

    print(v);





    system("pause");

    return 0;

}