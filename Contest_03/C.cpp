#include<bits/stdc++.h>

using namespace std;

bool isPal(long long n) {

    long long rem,rev=0, temp=n;

    while(n) {
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }

    if(rev==temp)
        return true;
    else
        return false;

}

int main() {

    int t;
    cin >> t;

    
    map<int,string> m;

    for(int i=1; i<=t; i++) {
        long long n;
        cin >> n;

        if(isPal(n))
            m.insert(make_pair(i,"Yes"));
        else
            m.insert(make_pair(i,"No"));

    }

    map<int,string>::iterator it;

    for(it=m.begin(); it!=m.end(); it++) {
        cout << "Case " << it->first << ":" << " " << it->second << endl;
    }





    system("pause");

    return 0;

}