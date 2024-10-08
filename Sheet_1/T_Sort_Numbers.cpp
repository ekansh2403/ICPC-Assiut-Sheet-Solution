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
    vec arr(3);
    F(i,0,3){
        cin>>arr[i];
    }
    vec ans=arr;
    sort(all(arr));
    for(auto it : arr){
        cout<<it<<endl;
    }
    cout<<endl;
    for(auto it:ans){
        cout<<it<<endl;
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