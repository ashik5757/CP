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
 
 
    int n = in_i;
 
    string s = in_s;
    vector<char> vc;
 
 
    for(int i=n-1; i>=0; i--) {
 
        int st = s.at(i)-'0';
 
        if(st==0) {
            string ss;
            ss+=s.at(i-2);
            ss+=s.at(i-1);
 
            int nm = stoi(ss);
            char c = (char)(nm+96);
 
            vc.push_back(c);
 
            i-=2;
        }
 
        else {
            char c = (char)(st+96);
            vc.push_back(c);
        }
    }
 
 
    for(int i=vc.size()-1; i>=0; i--) {
        cout << vc.at(i);
    }
    cout << endl;
 
 
 
 
}
 
 
int main() {
 
    int t = in_i;
    while(t--)
        solve();
 
 
    system("pause");
 
    return 0;
 
}