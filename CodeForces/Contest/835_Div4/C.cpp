#include<bits/stdc++.h>

using namespace std;

#define ll long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<char,int> mci;
typedef set<int> set_i;
typedef set<string> set_s;
typedef set<char> set_c;


typedef priority_queue<int> pqi;
typedef priority_queue<char> pqc;



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
#define println2(p,q) cout<<p<<" "<<q<<endl
#define println3(p,q,r) cout<<p<<" "<<q<<" "<<r<<endl


bool compare(pair<int,int> a, pair<int,int> b) {
    return a.first>b.first;
}

bool compare_idx(pair<int,int> a, pair<int,int> b) {
    return a.second<b.second;
}

void solve() {

    int n = in_i;

    vector<pair<int,int>> vp;
    for(int i=0; i<n; i++) {
        int t = in_i;
        vp.push_back(make_pair(t,i+1));
    }

    sort(vp.begin(),vp.end(),compare);



    int mx = 0;
    for(int i=0; i<n; i++) {
        mx = max(mx, vp[i].first);

        if(i==0) 
            vp[i].first = vp[i].first - vp[i+1].first;
        
        else 
            vp[i].first = vp[i].first - mx;
    }

    sort(vp.begin(),vp.end(),compare_idx);

    for(int i=0; i<n; i++) {
        cout << vp[i].first << " ";
    }

    BR;

    vp.clear();


}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    //system("pause");

    return 0;

}