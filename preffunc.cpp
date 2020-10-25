#include <bits/stdc++.h>
using namespace std;
//https://vjudge.net/contest/401915#problem/A
#define re return 0;
#define ll long long
#define str string
#define INF (int)(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define maxn (ll)(2e6+7)
#define sz(s) s.size()

int opr,m,n,mod1,mod2;


str s,t;
vector<int >pos;
int cnt;
vector<int> pref (string s) {
      int n = (int) s.length();
      vector<int> pi (n);
      for (int i=1; i<n; ++i) {
            int j = pi[i-1];
            while (j > 0 && s[i] != s[j])
                  j = pi[j-1];
            if (s[i] == s[j])  ++j;
            pi[i] = j;
      }
      return pi;
}

void solve(int opp){
      cnt=0;
      cin>>s;
      cin>>t;
      str g=t+'='+s;
      vector < int > ans = pref(g);
      for(int i=1+t.size();i<ans.size();++i){
            if(ans[i]==t.size()){
                  cnt++;
                  pos.pb(i-(t.size()+t.size())+1);
            }
      }
      cout<<"Case "<<opp<<": ";
      cout<<cnt<<"\n";

}
int main(){
      scanf("%d", &opr);
      int kk=opr;
      while(opr--) {
            solve(kk-opr);
      }


}
