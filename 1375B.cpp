
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")

#define N 200006

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,cnn=0, ans=0,sum=0 ;
        cin>>n>>m;

        ll a[n][m], v[n][m];
        fr(i, n)fr(j, m)cin>>a[i][j], v[i][j]=a[i][j];

        fr(i, n)
        {
            fr(j, m)
            {
                x=4;
                if(i==0)x--;
                if(i==n-1)x--;
                if(j==0)x--;
                if(j==m-1)x--;

                v[i][j]=x;
                if(v[i][j] < a[i][j])cnt=1;
            }
        }

        if(cnt)pno;
        else
        {
            pys;
            fr(i, n)
            {
                fr(j, m)
                {
                    cout<<v[i][j]<<" ";
                }
                pn;
            }
        }

        //cout<<ans;pn;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1


