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
    ll n;
    cin>>n;
    int a=n;
    ll rev_ans=0;

    while(a>0){

        ll digit=a%10;
         rev_ans=rev_ans*10+digit;
         a/=10;

    }
    cout<<rev_ans<<endl;
    if(rev_ans==n){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main() {

    // test{solve();}
    solve();
}