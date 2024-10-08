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
    double x,y;
    cin>>x>>y;
    if(x==0 && y==0) cout<<"Origem"<<endl;
    else if(y==0) cout<<"Eixo X"<<endl;
    else if(x==0) cout<<"Eixo Y"<<endl;
    else if(x>0 && y>0) cout<<"Q1"<<endl;
    else if(x<0 && y>0) cout<<"Q2"<<endl;
    else if(x>0 && y<0) cout<<"Q4"<<endl;
    else cout<<"Q3"<<endl;
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif

    // test{solve();}
    solve();
}