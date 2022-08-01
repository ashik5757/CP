#include<bits/stdc++.h>
using namespace std;


// Some shortcut techniques to make the code more writeable
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define println(x) cout<<x<<endl
#define print(x) cout<<x<<" "
#define max(a,b) (a>b?a:b)
#define min(a,b) (a < b? a:b)
#define printAr(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" ";cout<<endl;
#define loop(i,a,n) for(int i=a;i<n;i++)
#define loopr(i,a,n) for(int i=n-1;i>=a;i--)
#define inAr(x,n) for(ll i=0;i<n;i++)cin>>x[i]
#define in(x) cin>>x
#define IN ({ ll TEMP; cin>>TEMP; TEMP; })
#define SN ({ string TEMP; cin>>TEMP; TEMP;})
#define power(x,y) (ll)pow(x,y)


// Shortcut Value
const ll INF = 9e18;
const int mod = 1e9+7;
const int N = 1e5+10;


void solve(){
    int n = IN;
    string s[n];
    set<string> st;
    for(int i=0; i<n; i++){
        s[i] = SN;
        st.insert(s[i]);
    }
    for(int i=0; i<n; i++){
        int t = 0;
        for(int j=0; j<s[i].size(); j++){
            if(st.count(s[i].substr(0, j)) && st.count(s[i].substr(j))){
                t = 1;
            }
        }
        cout<<t;
    }
    println("");
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t_case = IN;
    while(t_case--){solve();}
    //solve();
    return 0;
}

			    	 	 			   	 			     				