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
#define prln1(p) cout<<p<<endl
#define prln2(p,q) cout<<p<<" "<<q<<endl
#define prln3(p,q,r) cout<<p<<" "<<q<<" "<<r<<endl

#define it_set_print(pts) for(auto it=pts.begin();it!=pts.end();it++)cout<<*it<< " ";cout<<endl;
#define it_map_print(pts) for(auto it=pts.begin();it!=pts.end();it++)cout<<it.first() << " " << it->second()<<endl;


void solve() {

    int n;
    cin >> n;

    string s[2*n-1];

    for(int i=0; i<(2*n-2); i++)
        s[i] = in_s; 
    


    for(int i=0; i<(2*n-2); i++) {
        if(s[i].size()==n-1){
            string ts = s[i];
            reverse(ts.begin(),ts.end());
            for(int j=0; j<(2*n-2) && i!=j; j++) {
                if(s[j]==ts){
                    YES;
                    return;
                }
            }
        }  
    }
    
 
    NO;


}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    system("pause");

    return 0;

}