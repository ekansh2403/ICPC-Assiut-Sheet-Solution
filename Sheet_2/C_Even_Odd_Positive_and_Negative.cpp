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
    vec arr(n);
    F(i,0,n){
        cin>>arr[i];
    }
    ll cntP=0,cntN=0,cntE=0,cntO=0;
    for(auto &it:arr){
        if(it>0){
            cntP++;
            if(it%2==0){
                cntE++;
            }
            else{
                cntO++;
            }
        }
        else if(it<0){
            cntN++;
            if(it%2==0){
                cntE++;
            }
            else{
                cntO++;
            }

        }
        if(it==0) cntE++;
    }
    cout<<"Even: "<<cntE<<endl;
    cout<<"Odd: "<<cntO<<endl;
    cout<<"Positive: "<<cntP<<endl;
    cout<<"Negative: "<<cntN<<endl;



}

int main() {

    // test{solve();}
    solve();
}