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
#define F(i,a,b) for(int i=a;i<=b;i++)
bool isLucky(ll n){
    while(n>0){
        int digit=n%10;
        if(digit!=4&&digit!=7) return false;
        n/=10;
    }
    return true;
}
void solve(){
    int a,b;
    cin>>a>>b;
    bool flag=false;
    F(i,a,b){
        if(isLucky(i)){
            cout<<i<<" ";
            flag=true;
        }
    }
    if(!flag) cout<< -1;
    cout<<endl;
}

int main() {

    // test{solve();}
    solve();
}