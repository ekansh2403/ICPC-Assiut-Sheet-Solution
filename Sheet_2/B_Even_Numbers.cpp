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

void solve(){
    int n;
    cin>>n;
    if(n>1){
        for(int i=2;i<=n;i+=2){
            cout<<i<<endl;
        }
    }
    else cout<< -1 <<endl;
}

int main() {

    // test{solve();}
    solve();
}