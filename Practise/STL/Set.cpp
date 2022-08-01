#include<bits/stdc++.h>

using namespace std;

int main() {


    int n;
    cin >> n;

    int arr[n];
    set<int> s;
    set<int>::iterator it;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    cout << s.size() << endl;

    // for(int i=0; i<n; i++) {

    // }
    // cout << endl;

    it = s.find(4);
    if(it!=s.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;




    system("pause");

    return 0;

}