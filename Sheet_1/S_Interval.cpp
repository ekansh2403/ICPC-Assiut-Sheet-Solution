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
    double x;
    cin>>x;
    if(x>=0 && x<=25){
        cout<<"Interval [0,25]"<<endl;
    }
    else if (x>25 && x<=50){
        cout<<"Interval (25,50]"<<endl;
    }
    else if(x>50 && x<=75){
        cout<<"Interval (50,75]"<<endl;
    }
    else if(x>75 && x<=100){
        cout<<"Interval (75,100]"<<endl;
    }
    else{
        cout<<"Out of Intervals"<<endl;
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