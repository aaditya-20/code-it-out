#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int pow(long long int a,long long int b,long long int p){
    a=a%p;
    long long int ans=1;
    while(b){
        if(b&1){
            ans=(a*ans)%p;
        }
        a=(a*a)%p;
        b=b>>1;
    }
   
    return ans;
}
long long int modinv(long long int a,long long int p){
    long long int ans;
    ans = pow(a,p-2,p);
    return ans;
}

int main() {
    
   int t;
cin>>t;
    while(t--){
       long long int comb;
        long long int mod = 1e9+7;
      long long int n,m;
      cin>>n>>m;
      long long int fact[m+n+1];
       fact[0]=1;
          fact[1]=1;
      for(int i=2;i<=(m+n);i++){
         fact[i]=(fact[i-1]*i)%mod;
          
      }
      if(m>n){
          int temp =n;
          n=m;
          m= temp;
      }
  comb = (fact[m+n] * modinv(fact[m],mod) % mod * modinv(fact[n],mod) % mod)%mod;
      cout<<comb<<endl;
     
     
      }
   
}