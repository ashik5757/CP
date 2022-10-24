#include<bits/stdc++.h>

using namespace std;

#define ll long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef set<int> si;
typedef set<string> ss;

#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define BR cout << endl

#define in_i ({int tmp; cin>>tmp; tmp;})
#define in_ll ({ll tmp; cin>>tmp; tmp;})
#define in_s ({string tmp; cin>>tmp; tmp;})
#define in_arr(arr,n) for(ll i=0;i<n;i++)cin>>arr[i];
#define in_arr2(arr,r,c) for(ll i=0;i<r;i++)for(ll j=0;j<c;j++)cin>>arr[i][j];
#define in_vi(vec,n) for(ll i=0;i<n;i++){int tmp;cin>>tmp;vec.push_back(tmp);};
#define in_vs(vec,n) for(ll i=0;i<n;i++){string tmp;cin>>tmp;vec.push_back(tmp);};
#define in_si(set,n) for(ll i=0;i<n;i++){int tmp;cin>>tmp;set.insert(tmp);};
#define in_ss(set,n) for(ll i=0;i<n;i++){string tmp;cin>>tmp;set.insert(tmp);};

#define toLower_str(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define toUpper_str(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define sort_i(arr) sort(arr,arr+n);
#define sort_s(str) sort(str.begin(),str.end());
#define print_arr(arr,n) for(ll i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
#define print_arr2(arr,r,c) for(ll i=0;i<r;i++){for(ll j=0;j<c;j++){cout<<arr[i][j]<<" ";}cout<<endl;}
#define println(p) cout<<p<<endl





void solve() {

    char p[8][8];
    string result = "";

    for(int i=0; i<8; i++) {
        map<char,int> m;

        for(int j=0; j<8; j++) {
            cin >> p[i][j];
            m[p[i][j]]++;
        }

        if(m['R']==8)
            result = "R";
        else if(m['B']==8)
            result = "B";
    }

    if(result=="") {

        for(int i=0; i<8; i++) {
            map<char,int> m;

            for(int j=0; j<8; j++) {
                m[p[j][i]]++;
            }

            if(m['R']==8)
                result = "R";
            else if(m['B']==8)
                result = "B";
        }
    }


    cout << result << endl;




}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    system("pause");

    return 0;

}