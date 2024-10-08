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
char ToUP(char &c){
    return c-('a'-'A');
}
char ToLow(char &c){
    return c+('a'-'A');
}
void solve(){
    char x;
    cin>>x;
    if(x>='a'&&x<='z') {
        char ch=ToUP(x);
        cout<<ch<<endl;
    }
    else{
        char ch=ToLow(x);
        cout<<ch<<endl;
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