
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})

//int dx[] = {0,1,0,-1,1,1,-1,-1};
//int dy[] = {1,0,-1,0,1,-1,-1,1};

//i64 gcd(i64 a,i64 b){if(!b)return a;return gcd(b,a%b);}


//i64 bigmod(i64 num,i64 n){if(n==0)return 1;i64 x=bigmod(num,n/2);x=x*x%mod;if(n%2==1)x=x*num%mod;return x;}

//i64 modinverse(i64 num){return bigmod(num,mod-2)%mod;}

//i64 po(i64 a,i64 b){i64 ans=1;while(b--)ans *= a;return ans;}

//i64 ncr(i64 n,i64 r){if(n==r)return 1;if(r==1)return n;if(dp[n][r]!=-1)return dp[n][r];return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);}




#define pb(x) push_back(x)

#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);
/// ll binarySearch( ll a[] , int l, int r, int x) { while (l <= r) {  int m = l + (r-l)/2; if (a[m] == x) return m; if (a[m] < x) l = m + 1;elser = m - 1;}}

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

int main()
{

    ll m,n,t,b,i,j,k,x,l,p,ans;
    //scl(t);
    vector<int>a;
    //for(x=1; x<=t; x++)
   // {
        scl(n); l=0;
        while(n)
        {
            k=n,m=0,p=1;
              //cout<<"Before -> k,p,m -> "<<k<<" "<<p<<" "<<m<<endl;
            while(k)
            {
                if(k%10 !=0) m+=p;
                k=k/10;
                p=p*10;
                //cout<<"k,p,m -> "<<k<<" "<<p<<" "<<m<<endl;
            }
            a.push_back(m);
            //cout<<"n, m ,l -> "<<n<<" "<<m<<" "<<l<<endl;
            l++;  n=n-m;

        }
        cout<<l<<endl;

        for(i=0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    //}

return 0;
}
