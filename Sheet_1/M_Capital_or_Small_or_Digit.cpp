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

bool checkNum(char &c){
    if(c>='0'&&c<='9') return true;
    return false;
}
bool checkAlpha(char &c){
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        return true;
    }
    return false;
}
bool checkLower(char &c){
    if(c>='a'&& c<='z') return true;
    return false;
}

bool checkUpper(char &c){
    if(c>='A'&& c<='Z') return true;
    return false;
}
void solve(){
    //we can solve this using inbuilt function but we will write our own function

    char x;
    cin>>x;
    if(checkNum(x)){
        cout<<"IS DIGIT"<<endl;
        
    }
    else if(checkAlpha(x)){
        cout<<"ALPHA"<<endl;
        if(checkLower(x)) cout<<"IS SMALL"<<endl;
        else cout<<"IS CAPITAL"<<endl;
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