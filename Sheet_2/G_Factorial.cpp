#include <bits/stdc++.h>
using namespace std;

using vi=vector<int>;
using vvi=vector<vi>;
using pi=pair<int,int>;
using vpii=vector<pi>;
#define pb push_back
#define ll long long
#define vec vector<long long>
#define test int tc; cin>>tc; while(tc--)
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define pll pair<long long,long long>
#define F(i,a,b) for(int i=a;i<b;i++)
ll factorial(ll n){
    if(n==1||n==0){
        return 1;
    }
    return n*factorial(n-1);
}
void solve(){
    ll n;
    cin>>n;
    ll ans=factorial(n);
    cout<<ans<<endl;
}

int main() {

    test{solve();}
    // solve();
}