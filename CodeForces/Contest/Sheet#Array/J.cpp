#include<bits/stdc++.h>

using namespace std;




int main() {

    int n;
    cin >> n;
    
    long long arr[n];
    map<int,int> m;


    for(int i=0; i<n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }

    map<int,int>::iterator it;
    it = m.begin();

    if(it->second%2!=0)
        cout << "Lucky" << endl;
    else 
        cout << "Unlucky" << endl;


    



    system("pause");

    return 0;


}