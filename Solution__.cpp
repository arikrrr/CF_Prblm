#include <bits/stdc++.h>
#include <math.h>
#include <sstream>
#define ll long long
#define all(c) c.begin(),c.end()
#define sz(c) int(c.size())
#define tr(a,it) for(auto it=a.begin(); it!=a.end(); it++)
#define present(c, x)(c.find(x) != c.end())
#define cpresent(c, x)(find(all(c), x) != c.end())
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pair<int,int>>
#define inf 10e9
#define MOD %(1000000007)
#define loop(i,s,e) for(int i=s; i<e; i++)
#define revloop(i,s,e) for(int i=s; i>=e; i--)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n; int i,j; cin >> i >> j;
    int secy[2*n][2*n]={0},ct=1,l=0,k=2*n-1;
    for(int i=0; i<2*n;i++){for(int j=0; j<2*n; j++) secy[i][j]=0;}
    while(l<2*n)
    {
        for(int x=0; x<=l; x++){if(!secy[x][l]){secy[x][l]=ct;ct++;}}
        for(int x=l-1; x>=0; x--){if(!secy[l][x]){secy[l][x]=ct;ct++;}}
        l++;
        for(int x=2*n-1; x>=k; x--){if(!secy[x][k]){secy[x][k]=ct;ct++;}}
        for(int x=k+1; x<=2*n-1; x++){if(!secy[k][x]){secy[k][x]=ct;ct++;}}
        k--;
    }
    cout << secy[i][j];
    return 0;
}