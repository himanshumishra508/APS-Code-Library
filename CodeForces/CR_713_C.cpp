#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define inf LLONG_MAX
#define ninf LLONG_MIN
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define rr(v) for(auto &val:v)
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
ll power(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll powermod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);}
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll ceel(ll x,ll y) {return (x+y-1)/y;}
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));}
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;
#define mod 1e9+7


int main()
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        ll a, b, n; cin >>a >>b ;
        ll arr[2];
        arr[0]=a;
        arr[1]=b;
        string s; cin >> s;
        n=s.size();
       
        rep(i, 0, n) arr[s[i]-'0']-=1;
        rep(i, 0, n/2){
            if(s[i]=='?' and s[n-i-1]!='?')
            {
                s[i]=s[n-1-i];
                arr[s[n-i-1]-'0'] -= 1;
            }
            if(s[i]!='?' and s[n-i-1]=='?')
            {
                s[n-1-i]=s[i];
                arr[s[i]-'0'] -= 1;
            }
        }
       
       
        //  cout<< s << endl;
        // cout<< arr[0]<< " "<< arr[1]<< endl;
       
        rep(i, 0, n/2){
           
            if(s[i]=='?' and arr[0]>arr[1] and arr[0]>=2)
            {
                s[i]='0';
                s[n-1-i]='0';
                arr[0]-=2;
            }
            else if(s[i]=='?' and arr[0]<arr[1] and arr[1]>=2)
            {
                //cout<< "yes";
                s[i]='1';
                s[n-1-i]='1';
                arr[1]-=2;
            }
            else if(s[i]=='?' and arr[0]>=2)
            {
                 s[i]='0';
                s[n-1-i]='0';
                arr[0]-=2;
            }
            else if(s[i]=='?' and arr[1]>=2)
            {
                 s[i]='1';
                s[n-1-i]='1';
                arr[1]-=2;
            }
        }
       
         if(n%2==1 and s[n/2]=='?')
        {
            if(arr[0]>arr[1]) {s[n/2]='0'; arr[0]-=1;}
            else {s[n/2]='1'; arr[1]-=1;}
        }
        // cout<< s << endl;
        // cout<< arr[0]<< " "<< arr[1]<< endl;
       
        ll flag=0, one=0, zero=0;
        rep(i, 0, n/2)
        {
            if(s[i]!=s[n-1-i] || s[i]=='?') {flag=1; break;}
        }
        rep(i, 0, n)
        {
           if(s[i]=='0') zero++;
           else if(s[i]=='1') one++;
        }
        if(n%2==1 and s[n/2]=='?') flag=1;
       
        if(zero!=a || one!=b) flag=1;
        if(flag==0) cout<< s << endl;
        else cout<< -1 << endl;
    }
return 0;
}
