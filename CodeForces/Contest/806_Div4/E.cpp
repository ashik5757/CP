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
    string arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for(int i=1; i<=n/2; i++) {
        
        
        int end = n-i;
        int col = n-i;
        int row = n-i;

        for(int j=i-1; j<n-i; j++) {

            int zero = 0;

            if(arr[i-1].at(j)=='0')
                zero++;
            if(arr[j].at(end)=='0')
                zero++;
            if(arr[row].at(i-1)=='0')
                zero++;
            if(arr[end].at(col)=='0')
                zero++;

            
            int one = 4-zero;
            //cout << zero << " " << one << " = " << i-1 << " " << j << endl;
            count+=min(zero,one);

            col--;
            row--;
            
        }
    }

    println(count);


}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    system("pause");

    return 0;

}