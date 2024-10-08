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
    int a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='>'){
        if(a>b) cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    else if(s=='<'){
        if(a<b) cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    else{
        if(a==b) cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif

    // test{solve();}
    solve();
}