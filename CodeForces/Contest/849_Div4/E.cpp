#include<bits/stdc++.h>

using namespace std;

#define MAX_5 1e5
#define MAX_9 1e9
#define MIN_5 -1e5
#define MIN_9 -1e9


#define ll long long
#define ld long double
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
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define BR cout << endl

#define in_i ({int tmp; cin>>tmp; tmp;})
#define in_ll ({ll tmp; cin>>tmp; tmp;})
#define in_s ({string tmp; cin>>tmp; tmp;})
#define in_c ({char tmp; cin>>tmp; tmp;})
#define in_arr(arr,n) for(ll i=0;i<n;i++)cin>>arr[i];
#define in_arr2(arr,r,c) for(ll i=0;i<r;i++)for(ll j=0;j<c;j++)cin>>arr[i][j];
#define in_vi(vec,n) for(ll i=0;i<n;i++){int tmp;cin>>tmp;vec.push_back(tmp);};
#define in_vs(vec,n) for(ll i=0;i<n;i++){string tmp;cin>>tmp;vec.push_back(tmp);};
#define in_set_i(set,n) for(ll i=0;i<n;i++){int tmp;cin>>tmp;set.insert(tmp);};
#define in_set_s(set,n) for(ll i=0;i<n;i++){string tmp;cin>>tmp;set.insert(tmp);};
#define in_set_c(set,n) for(ll i=0;i<n;i++){char tmp;cin>>tmp;set.insert(tmp);};

#define toLower_str(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define toUpper_str(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define sort_i(arr) sort(arr,arr+n);
#define sort_s(str) sort(str.begin(),str.end());
#define print_arr(arr,n) for(ll i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
#define print_arr2(arr,r,c) for(ll i=0;i<r;i++){for(ll j=0;j<c;j++){cout<<arr[i][j]<<" ";}cout<<endl;}
#define it_set_print(st) for(auto it=st.begin();it!=st.end();it++)cout<<*it<< " ";cout<<endl;
#define it_map_print(m) for(auto it=m.begin();it!=m.end();it++)cout<<it.first() << " " << it->second()<<endl;
#define print_vec(v,n) for(ll i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;
#define prln1(p) cout<<p<<endl
#define prln2(p,q) cout<<p<<" "<<q<<endl
#define prln3(p,q,r) cout<<p<<" "<<q<<" "<<r<<endl




void solve() {

    ll n;
    cin >> n;

    ll arr[n];
    ll sum = 0;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr,arr+n);

    int i = 0;
    for(int j=1; j<n; j++) {
        if(arr[i]<0 || arr[j]<0) {
            ll tsum = sum - arr[i] - arr[j];
            tsum = tsum + (-1*arr[i]) + (-1*arr[j]);
            
            //prln2(sum,tsum);
            if(tsum==max(sum,tsum) && sum!=tsum){
                sum = max(sum,tsum);
                arr[j] = -1*arr[j];
            }
            i++;
            
        }
        else
            break;
    }

    prln1(sum);
}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    //system("pause");

    return 0;

}